// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveFugaz.h"
#include "ObserverProjectile.h"
#include "AgujeroNegro.h"

ANaveFugaz::ANaveFugaz()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

	velocidad = 1.0f;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 1.5f;
	Vida = 100;
	
}

void ANaveFugaz::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ANaveFugaz::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Disparar(FVector(-1.0f, 0.0f, 0.0f));
	if (retorno == true)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), PosicionInicial, DeltaTime, 0.5));
		TiempoTranscurrido += DeltaTime;
		if (TiempoTranscurrido >= 5)
		{
			retorno = false;
			TiempoTranscurrido = 0;
		}
	}
}

void ANaveFugaz::Mover(float DeltaTime)
{
	float Amplitud = 2.0f;
	float Frecuencia = 1.0f;
	float Tiempo = GetWorld()->GetTimeSeconds();  // Obtener el tiempo actual del juego

	// Obtener la ubicación actual del actor
	FVector Coordenada = GetActorLocation();

	// Calcular el desplazamiento en zigzag en el eje Y
	float ZigZagY = FMath::Sin(Tiempo * Frecuencia) * Amplitud;

	// Calcular la nueva ubicación
	FVector NewLocation = FVector(Coordenada.X - velocidad + ZigZagY * DeltaTime, Coordenada.Y + ZigZagY, Coordenada.Z);

	// Establecer la nueva ubicación del actor
	SetActorLocation(NewLocation);
}

void ANaveFugaz::Disparar(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AObserverProjectile>(SpawnLocation, FireRotation);


			}
			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveFugaz::ShotTimerExpired, FireRate);

			bCanFire = false;

		}
	}
}

void ANaveFugaz::ShotTimerExpired() 
{
	bCanFire = true;
}

void ANaveFugaz::RecibirDanio()
{
	Vida -= 5;
	if (Vida <= 0)
	{
		Destroy();
		/*AgujeroNegro = Cast<AAgujeroNegro>(this);
		AgujeroNegro->SetContadorNaves(1);*/
	}
}

void ANaveFugaz::Curarse()
{
	//Vida = 100;
}
