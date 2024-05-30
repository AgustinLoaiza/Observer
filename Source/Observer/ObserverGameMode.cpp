// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObserverGameMode.h"
#include "ObserverPawn.h"
#include "Radar.h"
#include "NaceCaza.h"
#include "NaveFugaz.h"
#include "NaveTanque.h"
#include "NaveNodriza.h"

AObserverGameMode::AObserverGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AObserverPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
	VidaPromedio = 0;
}

void AObserverGameMode::BeginPlay()
{
	Super::BeginPlay();

	Radar = GetWorld()->SpawnActor<ARadar>(ARadar::StaticClass());

	ubicacionInicialNavesCazas = FVector(1000.0f, -150.0f, 200.0f);
	ubicacionInicialNavesTanques = FVector(800.0f, -150.0f, 200.0f);
	ubicacionInicialNavesFugaces = FVector(1200.0f, -450.0f, 200.0f);

	// Generar Naves Fugaces en las esquinas
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesFugaces.X, ubicacionInicialNavesFugaces.Y + i * 1200, ubicacionInicialNavesFugaces.Z);
		NaveFugaz = GetWorld()->SpawnActor<ANaveFugaz>(PosicionNaveActual, FRotator::ZeroRotator);
		NaveFugaz->EstablecerRadar(Radar);
		Naves.Add(NaveFugaz);
	}

	// Generar Naves Tanques
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesTanques.X, ubicacionInicialNavesTanques.Y + i * 500, ubicacionInicialNavesTanques.Z);
		NaveTanque = GetWorld()->SpawnActor<ANaveTanque>(PosicionNaveActual, FRotator::ZeroRotator);
		NaveTanque->EstablecerRadar(Radar);
		Naves.Add(NaveTanque);
	}

	// Generar Naves Caza
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesCazas.X, ubicacionInicialNavesCazas.Y + i * 200, ubicacionInicialNavesCazas.Z);
		NaveCaza = GetWorld()->SpawnActor<ANaceCaza>(PosicionNaveActual, FRotator::ZeroRotator);
		NaveCaza->EstablecerRadar(Radar);
		Naves.Add(NaveCaza);
	}


	// Nave Nodriza Aplicando el patron Stade
	// Generar Nave Nodriza
	ubicacionInicialNaveNodriza = FVector(1000.0f, 0.0f, 215.0f);
	NaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>(ubicacionInicialNaveNodriza, FRotator::ZeroRotator);

	NaveNodriza->InicializarEstadosNaveNodriza(); 
}

void AObserverGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	for (int i = 0; i < Naves.Num(); i++)
	{
		VidaPromedio = (Naves[i]->Vida+VidaPromedio/Naves.Num());
		if (VidaPromedio<20)
		{
			Radar->SetVidaPromedio(10);
		}
		if (i==Naves.Num())
		{
			VidaPromedio = 0;
		}
	}
}

