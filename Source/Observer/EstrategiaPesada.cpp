// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaPesada.h"
#include "ObserverPawn.h"
#include "ObserverProjectile.h"

// Sets default values
AEstrategiaPesada::AEstrategiaPesada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bCanFire = true; // Permitir disparos al principio

	TiempoDisparo = 2.0f; 
	GunOffset = FVector(90.f, 0.f, 0.f); 
	bCanFire = true; 
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

void AEstrategiaPesada::Disparar(AObserverPawn* _Pawn, FVector FireDirection)
{
	Pawn = Cast<AObserverPawn>(_Pawn); 
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
				Proyectil= World->SpawnActor<AObserverProjectile>(SpawnLocation, FireRotation);
				Proyectil->SetActorScale3D(FVector(3.0f, 3.0f, 3.0f)); 
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

