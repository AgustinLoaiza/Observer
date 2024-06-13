// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Obrero.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UObrero : public UInterface
{
	GENERATED_BODY() 
};

/**
 * 
 */
class OBSERVER_API IObrero 
{
	GENERATED_BODY() 

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion) = 0;
	virtual void BuildMesh() = 0;
	virtual void BuildDisparador() = 0;
	virtual void BuildEscudo() = 0;
	virtual void BuildMuroEspinas() = 0;
	virtual void BuildTrampaChina() = 0;
	virtual class ABoqueron* GetBoqueron() = 0;
};
