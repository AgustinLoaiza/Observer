// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteBoqueron.h"
#include "Ingeniero.h"
#include "HansKundt.h"
#include "Boqueron.h"

// Sets default values for this component's properties
UComponenteBoqueron::UComponenteBoqueron()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UComponenteBoqueron::BeginPlay()
{
	Super::BeginPlay();

	// ...
	HansKundt = GetWorld()->SpawnActor<AHansKundt>(AHansKundt::StaticClass()); //StaticCalss quiere decir que esto es una clase de Unreal, si no hay no va a saber de donde esta sacando
	Ingeniero = GetWorld()->SpawnActor<AIngeniero>(AIngeniero::StaticClass());
	Spawn();
	ABoqueron* Boqueron = HansKundt->GetBoqueron();
	
}


// Called every frame
void UComponenteBoqueron::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UComponenteBoqueron::Spawn()
{
	HansKundt->SetObrero(Ingeniero); 
	HansKundt->ConstruirBoqueron(FVector(300.0f, 500.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f)); 
}

