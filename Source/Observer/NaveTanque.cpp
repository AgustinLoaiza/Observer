// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTanque.h"
#include "ObserverProjectile.h"
#include "AgujeroNegro.h"

ANaveTanque::ANaveTanque()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Assets/NaveTanque/c256a703439d_Caza_estelar_de_Sta.c256a703439d_Caza_estelar_de_Sta'"));
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	mallaNaveEnemiga->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

	velocidad = 1.0f;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 1.5f;
	Vida = 150;
	
}

void ANaveTanque::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ANaveTanque::Tick(float DeltaTime)
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

void ANaveTanque::Mover(float DeltaTime)
{
	FVector Coordenada = GetActorLocation();
	float posicion = velocidad * DeltaTime;
	FVector NewLocation = FVector(Coordenada.X - velocidad, Coordenada.Y, Coordenada.Z);
	SetActorLocation(NewLocation);
}

void ANaveTanque::Disparar(FVector FireDirection)
{
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
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveTanque::ShotTimerExpired, FireRate);

			bCanFire = false;

		}
	}
}

void ANaveTanque::ShotTimerExpired()
{
	bCanFire = true;
}

void ANaveTanque::RecibirDanio()
{
	Vida -= 10;
	if (Vida <= 0)
	{
		Destroy();
		/*AgujeroNegro = Cast<AAgujeroNegro>(this);
		AgujeroNegro->SetContadorNaves(1);*/
	}
}

void ANaveTanque::Curarse()
{
	//Vida = 150;
}
