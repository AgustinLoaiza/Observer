// Fill out your copyright notice in the Description page of Project Settings.


#include "NaceCaza.h"
#include "ObserverProjectile.h"
#include "AgujeroNegro.h" 


ANaceCaza::ANaceCaza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Assets/NaveCaza/e1d3aedca958_caza_estelar_StarWa.e1d3aedca958_caza_estelar_StarWa'"));
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

void ANaceCaza::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ANaceCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	Mover(DeltaTime); 
	Disparar(FVector(-1.0f, 0.0f, 0.0f));
	if (retorno == true)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), PosicionInicial, DeltaTime, 0.5));
		TiempoTranscurrido += DeltaTime; 
		if (TiempoTranscurrido>=5)
		{
			retorno = false;
			TiempoTranscurrido = 0;
		}
	}
	
}

void ANaceCaza::Mover(float DeltaTime)
{
	FVector Coordenada = GetActorLocation();
	float posicion = velocidad * DeltaTime;
	FVector NewLocation = FVector(Coordenada.X - velocidad, Coordenada.Y, Coordenada.Z);
	SetActorLocation(NewLocation);
}

void ANaceCaza::Disparar(FVector FireDirection)
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
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaceCaza::ShotTimerExpired, FireRate);

			bCanFire = false;

		}
	}
}

void ANaceCaza::ShotTimerExpired()
{
	bCanFire = true;
}

void ANaceCaza::RecibirDanio()
{
	Vida -= 5;
	if (Vida <= 0)
	{
		Destroy();
		/*AgujeroNegro = Cast<AAgujeroNegro>(this); 
		AgujeroNegro->SetContadorNaves(1); */
	}
}

void ANaceCaza::Curarse()
{
	Vida = 25;
}
