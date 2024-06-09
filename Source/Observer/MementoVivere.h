// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Memento.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MementoVivere.generated.h"

UCLASS()
class OBSERVER_API AMementoVivere : public AActor, public IMemento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMementoVivere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	int Vidas;
	int Energia;
	FVector PosicionMuerte;

	void RestaurarEstado() override;

protected:
	class AObserverPawn* Pawn;

};
