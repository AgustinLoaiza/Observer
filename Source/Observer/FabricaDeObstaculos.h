// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculos.h"
#include "FabricaDeObstaculos.generated.h"

UCLASS()
class OBSERVER_API AFabricaDeObstaculos : public AActor 
{
	GENERATED_BODY() 
	
public:	
	// Sets default values for this actor's properties
	AFabricaDeObstaculos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "FabricaDeObstaculos")
	static AObstaculos* CrearObstaculo(FString ObstaculoAFabricar, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);
};
