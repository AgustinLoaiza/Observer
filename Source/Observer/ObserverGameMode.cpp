// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObserverGameMode.h"
#include "ObserverPawn.h"
#include "Kismet/GameplayStatics.h"
#include "Radar.h"
#include "NaceCaza.h"
#include "NaveFugaz.h"
#include "NaveTanque.h"
#include "NaveNodriza.h"
#include "Cuidador.h"
#include "MyPlayerController.h"
#include "FabricaDeNaves.h"
#include "Boqueron.h"
#include "Ingeniero.h"
#include "HansKundt.h"
#include "ComponenteBoqueron.h"
#include "SpawnFacade.h"

AObserverGameMode::AObserverGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AObserverPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass(); 
	PrimaryActorTick.bCanEverTick = true;
	VidaPromedio = 0;
	Contador=Naves.Num();  
	ComponenteBoqueron = CreateDefaultSubobject<UComponenteBoqueron>(TEXT("ComponenteBoqueron")); 
}

void AObserverGameMode::BeginPlay()
{
	Super::BeginPlay();

	//Builder
	Boqueron = ComponenteBoqueron->Boqueron;

	//Facade
	SpawnFacade = GetWorld()->SpawnActor<ASpawnFacade>(FVector::ZeroVector, FRotator::ZeroRotator);

	SpawnFacade->lluviadeMeteoritos();
	SpawnFacade->lluviadeCometas();
	SpawnFacade->dropsCapsulas();
	SpawnFacade->OrdaNaves(); 


	// Nave Nodriza Aplicando el patron Stade
	// Generar Nave Nodriza
	ubicacionInicialNaveNodriza = FVector(1000.0f, 900.0f, 215.0f); 
	NaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>(ubicacionInicialNaveNodriza, FRotator::ZeroRotator); 

	NaveNodriza->InicializarEstadosNaveNodriza();  

	// Memento
	Pawn = Cast<AObserverPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)); 
	Cuidador = GetWorld()->SpawnActor<ACuidador>(ACuidador::StaticClass());
	GuardarJuego();  
	 
}

void AObserverGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Temporizador1 += DeltaTime;
	if (Temporizador1>=5.0f)
	{
		if (Pawn->IsPendingKill())
		{
			CargarJuego(); 
			Pawn = Cast<AObserverPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
			GuardarJuego(); 
		}
		Temporizador1 = 0.0f;
		
	}
}

void AObserverGameMode::GuardarJuego()
{
	
	if (Cuidador && Pawn)
	{
		Cuidador->Guardar(Pawn);
	}
}

void AObserverGameMode::CargarJuego()
{
	if (Cuidador && Pawn)
	{
		Cuidador->Cargar(Pawn);
	}
}

