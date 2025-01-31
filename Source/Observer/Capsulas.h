// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Visitor.h"
#include "Capsulas.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API ACapsulas : public AStaticMeshActor, public IVisitor
{
	GENERATED_BODY()

public:
	UStaticMeshComponent* MeshCapsula;
	ACapsulas();

	virtual void PickUp();
	virtual void PutDown(FTransform TargetLocation);
	void Mover(float DeltaTime);

protected:
	virtual void Tick(float DeltaTime) override;

protected:
	float tiempoGeneracion;

	float velocidad;

	float limiteCaida;

	FVector posicion;

public:
	virtual void Visit(class AObserverPawn* _Pawn) override;
	
};
