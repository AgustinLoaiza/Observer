// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDefensivo.h"
#include "NaveNodriza.h"

// Sets default values
AEstadoDefensivo::AEstadoDefensivo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoDefensivo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoDefensivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoDefensivo::SetNaveNodriza(ANaveNodriza* NaveNodriza)
{
}

void AEstadoDefensivo::EstadoDefensivo()
{
}

FString AEstadoDefensivo::GetEstado()
{
	return FString();
}

