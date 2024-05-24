// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publicador.h"
#include "Radar.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API ARadar : public APublicador
{
	GENERATED_BODY()

public:
	ARadar();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	int Energia;

public:
	void VidaNave();
	void SetEnergia(int _Energia);
	FORCEINLINE FString GetEnergia();
	
};
