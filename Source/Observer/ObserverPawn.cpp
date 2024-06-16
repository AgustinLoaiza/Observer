// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObserverPawn.h"
#include "ObserverProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "NaveEnemiga.h"
#include "MuroEspinas.h"
#include "Meteoro.h"
#include "Cometa.h"
#include "Capsulas.h"
#include "CapsulaVida.h"
#include "CapsulaEnergia.h"
#include "CapsulaVelocidad.h"
#include "TrampaChina.h"
#include "EstrategiaLigera.h"
#include "EstrategiaPesada.h"
#include "EstrategiaMultiple.h"
#include "MementoVivere.h"
#include "Visitor.h"

const FName AObserverPawn::MoveForwardBinding("MoveForward");
const FName AObserverPawn::MoveRightBinding("MoveRight");
const FName AObserverPawn::FireForwardBinding("FireForward");
const FName AObserverPawn::FireRightBinding("FireRight");

AObserverPawn::AObserverPawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

	Vidas = 3;
	Energia = 100;
	//Componentes de actor
	CapsulasCom=CreateDefaultSubobject<UComponenteCapsulas>(TEXT("Capsulas"));  
	Trampa=CreateDefaultSubobject<UComponenteChino>(TEXT("Trampa"));
	Movimiento=CreateDefaultSubobject<UComponenteBorracho>(TEXT("Movimiento"));
 
}

void AObserverPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void AObserverPawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	//FireShot(FireDirection);
	DeteccionNavesEnemigas(); 
	Estrategia->Disparar(this, FireDirection);  

	if (Energia <= 0)
	{
		Vidas--;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Vida: " + FString::FromInt(Vidas)));
		Energia = 100;
		//cargador = 50;
		MoveSpeed = 1000.0f;
	}
	if (Vidas <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Has muerto"));
		if (MementoVivere==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("No existe el Memento"));
			return;
		}
		MementoVivere->PosicionMuerte = GetActorLocation(); 
		Destroy();
	}
}

void AObserverPawn::BeginPlay()
{
	Super::BeginPlay();
	//Inicializar el TArray de Naves Enemigas
	NavesEnemigas = TArray<AActor*>(); 
	//Inicializar las estrategias
	EstrategiaLigera = GetWorld()->SpawnActor<AEstrategiaLigera>(FVector::ZeroVector, FRotator::ZeroRotator); 
	EstrategiaPesada = GetWorld()->SpawnActor<AEstrategiaPesada>(FVector::ZeroVector, FRotator::ZeroRotator); 
	EstrategiaMultiple = GetWorld()->SpawnActor<AEstrategiaMultiple>(FVector::ZeroVector, FRotator::ZeroRotator);
	AlternarEstrategia(EstrategiaMultiple);
	DeteccionNavesEnemigas();
	PosicionMuerte = GetActorLocation();
}

//Funcion que detecta la cantidad de naves enemigas para saber en que momento cambiará la estrategia
void AObserverPawn::DeteccionNavesEnemigas()
{ 
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveEnemiga::StaticClass(), NavesEnemigas);  

	if (NavesEnemigas.Num()==9)
	{
		AlternarEstrategia(EstrategiaMultiple);
	}
	else if (NavesEnemigas.Num()>1 && NavesEnemigas.Num() < 5)
	{
		AlternarEstrategia(EstrategiaLigera);
	}
	else if (NavesEnemigas.Num()<=0)
	{
		AlternarEstrategia(EstrategiaPesada);
	}

}

void AObserverPawn::AlternarEstrategia(IEstrategia* _Estrategia)
{
	Estrategia=Cast<IEstrategia>(_Estrategia);
}

//Inicializacion de las funciones del memento
void AObserverPawn::GuardarEstado(IMemento* Memento)
{
	MementoVivere=Cast<AMementoVivere>(Memento);
	if (MementoVivere)
	{
		MementoVivere->PosicionMuerte=PosicionMuerte;  
	}
}

void AObserverPawn::SetVidas(int _Vidas)
{
	Vidas=_Vidas;
}

void AObserverPawn::SetEnergia(int _Energia)
{
	Energia=_Energia;
}

void AObserverPawn::SetPosicionMuerte(FVector _PosicionMuerte)
{	
	PosicionMuerte=_PosicionMuerte;
}

int AObserverPawn::ObtenerVidas() const
{
	return Vidas;
}

int AObserverPawn::ObtenerEnergia() const
{
	return Energia;
}

FVector AObserverPawn::ObtenerPosicionMuerte() const
{
	return PosicionMuerte;
}

void AObserverPawn::Accept(IVisitor* _Visitor)
{
	if (_Visitor==nullptr)
	{
		return;
	}
	_Visitor->Visit(this);
}

void AObserverPawn::AplicarAccion(ACapsulas* _Capsulas)
{
	CapsulaVida=Cast<ACapsulaVida>(_Capsulas);
	CapsulaEnergia=Cast<ACapsulaEnergia>(_Capsulas);
	CapsulaVelocidad=Cast<ACapsulaVelocidad>(_Capsulas); 

	if (CapsulaVida)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Vida: " + FString::FromInt(Vidas))); 
		Vidas += 1;
	}
	if (CapsulaEnergia)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Black, TEXT("Energia: " + FString::FromInt(Energia))); 
		Energia = 100;
	}
	if (CapsulaVelocidad)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Velocidad: " + FString::FromInt(MoveSpeed))); 
		MoveSpeed = 1500.0f;
	}

}

//Colisiones
void AObserverPawn::TakeItem(ATrampaChina* InventoryTrap, ACapsulas* InventoryItem)
{
	if (InventoryTrap)
	{
		Movimiento->ActivarMovimiento(); 
		InventoryTrap->ComprarComponente(); 
		Trampa->AddToInventory(InventoryTrap); 
	}
	if (InventoryItem)
	{
		InventoryItem->PickUp();
	}
}

void AObserverPawn::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AMeteoro* Meteoro = Cast<AMeteoro>(Other);
	if (Meteoro)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Energia: " + FString::FromInt(Energia)));
		Energia -= 10;

	}
	ACometa* Cometa = Cast<ACometa>(Other); 
	if (Cometa)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Energia: " + FString::FromInt(Energia)));
		Energia -= 20;
	}
	AMuroEspinas* Muro = Cast<AMuroEspinas>(Other);
	if (Muro)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Energia: " + FString::FromInt(Energia))); 
		Energia -= 30;
	}
	ATrampaChina* InventoryItemChino = Cast<ATrampaChina>(Other);

	Capsulas = Cast<ACapsulas>(Other); 
	if (InventoryItemChino != nullptr || Capsulas != nullptr)
	{
		TakeItem(InventoryItemChino, Capsulas);

		Accept(Capsulas);  
		
	}

}

//void AObserverPawn::EntrarEnBatalla()
//{
//	//Estrategia->Disparar(this, FireDirection);
//}

//void AObserverPawn::FireShot(FVector FireDirection)
//{
//	// If it's ok to fire again
//	if (bCanFire == true)
//	{
//		// If we are pressing fire stick in a direction
//		if (FireDirection.SizeSquared() > 0.0f)
//		{
//			const FRotator FireRotation = FireDirection.Rotation();
//			// Spawn projectile at an offset from this pawn
//			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
//
//			UWorld* const World = GetWorld();
//			if (World != nullptr)
//			{
//				// spawn the projectile
//				World->SpawnActor<AObserverProjectile>(SpawnLocation, FireRotation);
//			}
//
//			bCanFire = false;
//			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AObserverPawn::ShotTimerExpired, FireRate);
//
//			// try and play the sound if specified
//			if (FireSound != nullptr)
//			{
//				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
//			}
//
//			bCanFire = false;
//		}
//	}
//}
//
//void AObserverPawn::ShotTimerExpired()
//{
//	bCanFire = true;
//}

