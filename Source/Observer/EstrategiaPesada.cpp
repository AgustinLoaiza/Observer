// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaPesada.h"
#include "ObserverPawn.h"
#include "BalaMortero.h"

// Sets default values
AEstrategiaPesada::AEstrategiaPesada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bCanFire = true; // Permitir disparos al principio

	TiempoDisparo = 4.0f; 
}

// Called when the game starts or when spawned
void AEstrategiaPesada::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaPesada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaPesada::Disparar()
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
				World->SpawnActor<ABalaMortero>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEstrategiaPesada::ShotTimerExpired, TiempoDisparo);

			bCanFire = false;
		}
	}
}

void AEstrategiaPesada::ShotTimerExpired()
{
	bCanFire = true;
}

