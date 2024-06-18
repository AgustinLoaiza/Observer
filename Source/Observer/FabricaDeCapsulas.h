// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsulas.h"
#include "FabricaDeCapsulas.generated.h"

UCLASS()
class OBSERVER_API AFabricaDeCapsulas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaDeCapsulas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "FabricaDeCapsulas")
	static ACapsulas* CrearCapsula(FString CapsulaAFabricar, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);

};
