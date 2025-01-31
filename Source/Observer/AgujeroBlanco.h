// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FuerzaNatural.h"
#include "AgujeroBlanco.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API AAgujeroBlanco : public AFuerzaNatural
{
	GENERATED_BODY()
	
public:
	TArray<class ACapsulas*> Capsulas;
	void GenerarMeteoros() override {};
	void GenerarCometas() override {};
	void GenerarNaves() override {};
	void GenerarCapsulas() override;
};
