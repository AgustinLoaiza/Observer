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
	TArray<class ANaveEnemiga*> Naves; 
	class ARadar* Radar; 
	float VidaPromedio;
	virtual void Tick(float DeltaTime) override;
public:
	void GenerarMeteoros() override;
	void GenerarCometas() override;
	void GenerarNaves() override;
	void GenerarCapsulas() override {};
	
};
