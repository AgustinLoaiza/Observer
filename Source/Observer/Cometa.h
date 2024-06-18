// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculos.h"
#include "Cometa.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API ACometa : public AObstaculos
{
	GENERATED_BODY()

public:
	ACometa(); 

public:
	void Tick(float DeltaTime) override;


public:
	void mover(float DeltaTime) override;

	FString ObstaculoAFabricar = "Cometa";

	
};
