// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaDeObstaculos.h"
#include "Obstaculos.h"
#include "Meteoro.h"
#include "Cometa.h"

// Sets default values
AFabricaDeObstaculos::AFabricaDeObstaculos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaDeObstaculos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaDeObstaculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AObstaculos* AFabricaDeObstaculos::CrearObstaculo(FString ObstaculoAFabricar, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	FVector UbicacionSpawneo = SpawnLocation;
	if (ObstaculoAFabricar == "Meteoro")
	{
		AMeteoro* ObstaculoFabricado = World->SpawnActor<AMeteoro>(UbicacionSpawneo, SpawnRotation);
		return ObstaculoFabricado;
	}
	else if (ObstaculoAFabricar == "Cometa")
	{
		ACometa* ObstaculoFabricado = World->SpawnActor<ACometa>(UbicacionSpawneo, SpawnRotation);
		return ObstaculoFabricado;
	}
	else
	{
		return nullptr;
	}
}

