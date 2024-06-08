// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cuidador.generated.h"

UCLASS()
class OBSERVER_API ACuidador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACuidador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Cuidador")
	class AMementoVivere* MementoVivere;

	UPROPERTY(VisibleAnywhere, Category = "Cuidador")
	class AObserverPawn* Pawn;

public:
	void Guardar(AObserverPawn* _Pawn);
	void Cargar(AObserverPawn* _Pawn);
};
