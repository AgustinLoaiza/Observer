// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaceCaza.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API ANaceCaza : public ANaveEnemiga
{
	GENERATED_BODY()
	
public:
	ANaceCaza();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

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

	FString FabricarNave = "NaveCaza";

};
