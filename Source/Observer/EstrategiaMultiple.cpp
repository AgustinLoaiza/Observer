// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaMultiple.h"
#include "ObserverPawn.h"
#include "ObserverProjectile.h"

// Sets default values
AEstrategiaMultiple::AEstrategiaMultiple()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	bCanFire = true;
	FireRate = 0.1f; 
}

// Called when the game starts or when spawned
void AEstrategiaMultiple::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaMultiple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaMultiple::Disparar()
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

				const FRotator FireRotation2 = FireDirection.Rotation() + FRotator(10.0f, 30.0f, 0.0f);
				const FRotator FireRotation3 = FireDirection.Rotation() + FRotator(10.0f, -30.0f, 0.0f);
				const FVector SpawnLocation2 = Pawn->GetActorLocation() + FVector(10.0f, 30.0f, 0.0f) + FireRotation2.RotateVector(GunOffset);
				const FVector SpawnLocation3 = Pawn->GetActorLocation() + FVector(10.0f, -30.0f, 0.0f) + FireRotation3.RotateVector(GunOffset);
				World->SpawnActor<AObserverProjectile>(SpawnLocation2, FireRotation2);
				World->SpawnActor<AObserverProjectile>(SpawnLocation3, FireRotation3);
				
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEstrategiaMultiple::ShotTimerExpired, FireRate);


			bCanFire = false;
		}
	}
}

void AEstrategiaMultiple::ShotTimerExpired()
{
	bCanFire = true;
}


