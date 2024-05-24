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

	float VidaPromedio;

public:
	void VidaNave();
	void SetVidaPromedio(float _VidaPromedio);
	FORCEINLINE float GetVidaPromedio();
	
};
