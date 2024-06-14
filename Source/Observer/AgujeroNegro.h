// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FuerzaNatural.h"
#include "AgujeroNegro.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API AAgujeroNegro : public AFuerzaNatural
{
	GENERATED_BODY()

public:
	void GenerarMeteoros() override;
	void GenerarCometas() override;
	void GenerarCapsulas() override {};
	
};
