// Fill out your copyright notice in the Description page of Project Settings.


#include "MementoVivere.h"
#include "Originador.h"
#include "ObserverPawn.h"
#include "Kismet/GameplayStatics.h"
#include "MyPlayerController.h"

// Sets default values
AMementoVivere::AMementoVivere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMementoVivere::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMementoVivere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMementoVivere::RestaurarEstado()
{
	AObserverPawn* JugadorEnMundoP = Cast<AObserverPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (JugadorEnMundoP)
	{
		JugadorEnMundoP->Destroy(); 
	}
	AObserverPawn* JugadorEnMundo = GetWorld()->SpawnActor<AObserverPawn>(AObserverPawn::StaticClass(), PosicionMuerte, FRotator::ZeroRotator);
	AMyPlayerController* JugadorController = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	JugadorController->Possess(JugadorEnMundo);
	
}

