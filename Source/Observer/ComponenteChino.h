// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrampaChina.h"
#include "ComponenteChino.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OBSERVER_API UComponenteChino : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteChino();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY()
	TArray<ATrampaChina*> CurrentInventory; 
	UFUNCTION()
	int32 AddToInventory(ATrampaChina* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(ATrampaChina* ActorToRemove);
		
};
