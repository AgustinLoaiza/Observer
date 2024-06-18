// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculos.h"
#include "Meteoro.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API AMeteoro : public AObstaculos
{
	GENERATED_BODY()

public:
	AMeteoro();

public:
	void Tick(float DeltaTime) override;


public:
	void mover(float DeltaTime) override;
	
	FString ObstaculoAFabricar = "Meteoro";
};
