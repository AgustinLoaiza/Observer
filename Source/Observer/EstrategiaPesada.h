// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategia.h"
#include "EstrategiaPesada.generated.h"

UCLASS()
class OBSERVER_API AEstrategiaPesada : public AActor, public IEstrategia
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaPesada();

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

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

	float TiempoDisparo;
	class AObserverProjectile* Proyectil;
	class AObserverPawn* Pawn;
	void Disparar(class AObserverPawn* _Pawn, FVector FireDirection) override;
	void ShotTimerExpired();

};
