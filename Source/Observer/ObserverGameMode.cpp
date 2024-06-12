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

AObserverGameMode::AObserverGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AObserverPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass(); 
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
		ANaveEnemiga* NuevaNaveFugaz = AFabricaDeNaves::FabricarNave("NaveFugaz", GetWorld(), PosicionNaveActual, FRotator::ZeroRotator); 
		//NaveFugaz = GetWorld()->SpawnActor<ANaveFugaz>(PosicionNaveActual, FRotator::ZeroRotator);
		NuevaNaveFugaz->EstablecerRadar(Radar);  
		//NaveFugaz->EstablecerRadar(Radar);
		Naves.Add(NuevaNaveFugaz);
	}

	// Generar Naves Tanques
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesTanques.X, ubicacionInicialNavesTanques.Y + i * 500, ubicacionInicialNavesTanques.Z);
		ANaveEnemiga* NuevaNaveTanque = AFabricaDeNaves::FabricarNave("NaveTanque", GetWorld(), PosicionNaveActual, FRotator::ZeroRotator);
		//NaveTanque = GetWorld()->SpawnActor<ANaveTanque>(PosicionNaveActual, FRotator::ZeroRotator);
		NuevaNaveTanque->EstablecerRadar(Radar); 
		//NaveTanque->EstablecerRadar(Radar);
		Naves.Add(NuevaNaveTanque);
	}

	// Generar Naves Caza
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesCazas.X, ubicacionInicialNavesCazas.Y + i * 200, ubicacionInicialNavesCazas.Z);
		ANaveEnemiga* NuevaNaveCaza = AFabricaDeNaves::FabricarNave("NaveCaza", GetWorld(), PosicionNaveActual, FRotator::ZeroRotator);
		//NaveCaza = GetWorld()->SpawnActor<ANaceCaza>(PosicionNaveActual, FRotator::ZeroRotator);
		NuevaNaveCaza->EstablecerRadar(Radar); 
		//NaveCaza->EstablecerRadar(Radar); 
		Naves.Add(NuevaNaveCaza);
	}


	// Nave Nodriza Aplicando el patron Stade
	// Generar Nave Nodriza
	/*ubicacionInicialNaveNodriza = FVector(1000.0f, 0.0f, 215.0f);
	NaveNodriza = GetWorld()->SpawnActor<ANaveNodriza>(ubicacionInicialNaveNodriza, FRotator::ZeroRotator);

	NaveNodriza->InicializarEstadosNaveNodriza();*/ 

	// Memento
	Pawn = Cast<AObserverPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)); 
	Cuidador = GetWorld()->SpawnActor<ACuidador>(ACuidador::StaticClass());
	GuardarJuego();  
	

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
	Temporizador1 += DeltaTime;
	
	if (Temporizador1>=3.0f)
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

