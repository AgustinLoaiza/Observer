// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ComponenteBoqueron.h"
#include "ObserverGameMode.generated.h"

UCLASS(MinimalAPI)
class AObserverGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AObserverGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	//Builder
	UComponenteBoqueron* ComponenteBoqueron; 
	//class AIngeniero* Ingeniero;
	//class AHansKundt* HansKundt;

	//Facade
	class ASpawnFacade* SpawnFacade; 

	//Observer
	TArray<class ANaveEnemiga*> Naves; 
	class ARadar* Radar;
	class ANaceCaza* NaveCaza;
	class ANaveFugaz* NaveFugaz;
	class ANaveTanque* NaveTanque;

	FVector ubicacionInicialNavesCazas;
	FVector ubicacionInicialNavesTanques;
	FVector ubicacionInicialNavesFugaces;

	float VidaPromedio;

	//Memento
	class AObserverPawn* Pawn;

	class ACuidador* Cuidador;

public:
	FVector ubicacionInicialNaveNodriza;
	class ANaveNodriza* NaveNodriza;

	void GuardarJuego();
	void CargarJuego();

	float Temporizador1;

	class ABoqueron* Boqueron;

	int Contador;


};



