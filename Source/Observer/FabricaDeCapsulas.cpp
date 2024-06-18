// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaDeCapsulas.h"
#include "Capsulas.h"
#include "CapsulaVelocidad.h"
#include "CapsulaVida.h"
#include "CapsulaEnergia.h"

// Sets default values
AFabricaDeCapsulas::AFabricaDeCapsulas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaDeCapsulas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaDeCapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACapsulas* AFabricaDeCapsulas::CrearCapsula(FString CapsulaAFabricar, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	FVector UbicacionSpawneo = SpawnLocation;
	if (CapsulaAFabricar == "CapsulaVelocidad")
	{
		ACapsulaVelocidad* CapsulaFabricada = World->SpawnActor<ACapsulaVelocidad>(UbicacionSpawneo, SpawnRotation);
		return CapsulaFabricada;
	}
	else if (CapsulaAFabricar == "CapsulaVida")
	{
		ACapsulaVida* CapsulaFabricada = World->SpawnActor<ACapsulaVida>(UbicacionSpawneo, SpawnRotation);
		return CapsulaFabricada;
	}
	else if (CapsulaAFabricar == "CapsulaEnergia")
	{
		ACapsulaEnergia* CapsulaFabricada = World->SpawnActor<ACapsulaEnergia>(UbicacionSpawneo, SpawnRotation);
		return CapsulaFabricada;
	}
	else
	{
		return nullptr;
	}
}

