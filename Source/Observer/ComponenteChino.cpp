// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteChino.h"

// Sets default values for this component's properties
UComponenteChino::UComponenteChino()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UComponenteChino::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteChino::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int32 UComponenteChino::AddToInventory(ATrampaChina* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);
}

void UComponenteChino::RemoveFromInventory(ATrampaChina* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}

