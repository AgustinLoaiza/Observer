// Fill out your copyright notice in the Description page of Project Settings.


#include "Victoria.h"
#include "ObserverPawn.h"

// Sets default values
AVictoria::AVictoria()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVictoria::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVictoria::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVictoria::Visit(AObserverPawn* Pawn)
{
}

