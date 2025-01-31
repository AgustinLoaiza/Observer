// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ObserverPawn.h"
#include "Estrategia.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstrategia : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class OBSERVER_API IEstrategia
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Disparar(class AObserverPawn* _Pawn, FVector FireDirection) = 0;
};
