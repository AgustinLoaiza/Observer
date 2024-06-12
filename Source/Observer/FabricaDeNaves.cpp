// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaDeNaves.h"
#include "NaveEnemiga.h"
#include "NaceCaza.h"
#include "NaveFugaz.h"
#include "NaveTanque.h"

// Sets default values
AFabricaDeNaves::AFabricaDeNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaDeNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaDeNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AFabricaDeNaves::FabricarNave(FString FabricarNaves, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	FVector UbicacionSpawneo = SpawnLocation;
	if (FabricarNaves=="NaveCaza")
	{
		ANaceCaza* NaveFabricada = World->SpawnActor<ANaceCaza>(UbicacionSpawneo, SpawnRotation);
		return NaveFabricada; 
	}
	else if (FabricarNaves == "NaveFugaz")
	{
		ANaveFugaz* NaveFabricada = World->SpawnActor<ANaveFugaz>(UbicacionSpawneo, SpawnRotation);
		return NaveFabricada;
	}
	else if (FabricarNaves == "NaveTanque")
	{
		ANaveTanque* NaveFabricada = World->SpawnActor<ANaveTanque>(UbicacionSpawneo, SpawnRotation);
		return NaveFabricada;
	}
	else
	{
		return nullptr;
	}
}

