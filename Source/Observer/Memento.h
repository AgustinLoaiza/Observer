// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Memento.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMemento : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class OBSERVER_API IMemento
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void RestaurarEstado(class IOriginador* _originador) = 0;
};
