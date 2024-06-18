// Fill out your copyright notice in the Description page of Project Settings.


#include "AgujeroBlanco.h"
#include "Capsulas.h"
#include "CapsulaVida.h"
#include "CapsulaEnergia.h"
#include "CapsulaVelocidad.h"
#include "FabricaDeCapsulas.h"

void AAgujeroBlanco::GenerarCapsulas()
{
	for (int i = 0; i < 3; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 1500.0f);
		ACapsulas* NewCapsula = AFabricaDeCapsulas::CrearCapsula("CapsulaVida", GetWorld(), SpawnLocation, FRotator(90.0f, 0.0f, 180.0f));
		Capsulas.Add(NewCapsula);
	}
	for (int i = 0; i < 3; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 1500.0f);
		ACapsulas* NewCapsula = AFabricaDeCapsulas::CrearCapsula("CapsulaEnergia", GetWorld(), SpawnLocation, FRotator::ZeroRotator);
		Capsulas.Add(NewCapsula);
	}
	for (int i = 0; i < 3; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 1500.0f);
		ACapsulas* NewCapsula = AFabricaDeCapsulas::CrearCapsula("CapsulaVelocidad", GetWorld(), SpawnLocation, FRotator::ZeroRotator);
		Capsulas.Add(NewCapsula);
	}
}
