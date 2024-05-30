// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaLigera.h"
#include "ObserverPawn.h"
#include "ObserverProjectile.h"

// Sets default values
AEstrategiaLigera::AEstrategiaLigera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GunOffset = FVector(90.f, 0.f, 0.f);
	bCanFire = true;
	FireRate = 0.1f;
}

// Called when the game starts or when spawned
void AEstrategiaLigera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaLigera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaLigera::Disparar()
{
	FVector FireDirection = Pawn->GetActorForwardVector(); 
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = Pawn->GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AObserverProjectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEstrategiaLigera::ShotTimerExpired, FireRate);


			bCanFire = false;
		}
	}
}

void AEstrategiaLigera::ShotTimerExpired()
{
	bCanFire = true;
}

