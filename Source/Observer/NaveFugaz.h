// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveFugaz.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API ANaveFugaz : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveFugaz();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:
	uint32 bCanFire : 1;

	FVector GunOffset;

	float FireRate;

	FTimerHandle TimerHandle_ShotTimerExpired;

	void ShotTimerExpired();

public:
	void Mover(float DeltaTime) override;
	void Disparar(FVector FireDirection) override;
	void RecibirDanio() override;
	void Curarse() override;

	FString FabricarNave = "NaveFugaz";
	
};
