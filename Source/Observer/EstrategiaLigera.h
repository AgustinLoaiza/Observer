// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategia.h"
#include "EstrategiaLigera.generated.h"

UCLASS()
class OBSERVER_API AEstrategiaLigera : public AActor, public IEstrategia
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaLigera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;

	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite) 
	float FireRate;

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

	class AObserverPawn* Pawn;
	void Disparar() override;
	void ShotTimerExpired();

};
