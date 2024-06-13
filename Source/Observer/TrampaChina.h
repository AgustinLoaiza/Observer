// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TrampaChina.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API ATrampaChina : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	UStaticMeshComponent* MeshChino;
	ATrampaChina();

	virtual void ComprarComponente();
	virtual void UtilizarComponente(FTransform TargetLocation);
	
};
