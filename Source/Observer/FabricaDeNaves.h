// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "FabricaDeNaves.generated.h"

UCLASS()
class OBSERVER_API AFabricaDeNaves : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaDeNaves();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "FabricaDeNaves")
	static ANaveEnemiga* FabricarNave(FString FabricarNaves, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);

};
