// Fill out your copyright notice in the Description page of Project Settings.


#include "AgujeroNegro.h"
#include "Meteoro.h"
#include "Cometa.h"
#include "NaceCaza.h"
#include "NaveFugaz.h"
#include "NaveTanque.h"
#include "FabricaDeNaves.h"
#include "FabricaDeObstaculos.h"
#include "Radar.h"

AAgujeroNegro::AAgujeroNegro()
{
	PrimaryActorTick.bCanEverTick = true; 
	VidaPromedio = 0; 
	//ContadorNaves = 9;
	
}

void AAgujeroNegro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//a=Naves.Num();
	//ContadorNaves = Naves.Num(); 
	for (int i = 0; i < Naves.Num(); i++)
	{
		VidaPromedio = (Naves[i]->Vida + VidaPromedio / Naves.Num());
		if (VidaPromedio < 20)
		{
			Radar->SetVidaPromedio(10);
		}
		if (i == Naves.Num())
		{
			VidaPromedio = 0;
		}
	}
	//if (ContadorNaves==0)
	//{
	//	//UE_LOG(LogTemp, Warning, TEXT("VICCC VICCC VICTORIA"));
	//	GEngine->AddOnScreenDebugMessage(-50, 150.f, FColor::Green, FString::Printf(TEXT("VICCC VICCC VICTORIA")), true, FVector2D(5.0f, 5.0f)); 
	//}
	//GEngine->AddOnScreenDebugMessage(-50, 150.f, FColor::Green, FString::Printf(TEXT("Numeor de Naves: %d"), ContadorNaves));
}

void AAgujeroNegro::GenerarMeteoros()
{
	//Insertar Meteoros
	for (int i = 0; i < 5; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 500.0f), FMath::RandRange(-1200.0f, -1000.0f), 215.0f);
		//AMeteoro* NewMeteoro = GetWorld()->SpawnActor<AMeteoro>(AMeteoro::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
		AObstaculos* NewMeteoro = AFabricaDeObstaculos::CrearObstaculo("Meteoro", GetWorld(), SpawnLocation, FRotator::ZeroRotator);
		Obstaculos.Add(NewMeteoro);
	}
}

void AAgujeroNegro::GenerarCometas()
{
	//Insertar Cometas
	for (int i = 0; i < 5; i++)
	{
		FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 500.0f), FMath::RandRange(1200.0f, 1000.0f), 215.0f);
		//ACometa* NewObstacle = GetWorld()->SpawnActor<ACometa>(ACometa::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
		AObstaculos* NewObstacle = AFabricaDeObstaculos::CrearObstaculo("Cometa", GetWorld(), SpawnLocation, FRotator::ZeroRotator);
		Obstaculos.Add(NewObstacle);
	}
}

void AAgujeroNegro::GenerarNaves()
{
	Radar = GetWorld()->SpawnActor<ARadar>(ARadar::StaticClass());

	FVector ubicacionInicialNavesCazas = FVector(1000.0f, -150.0f, 200.0f);
	FVector ubicacionInicialNavesTanques = FVector(800.0f, -150.0f, 200.0f);
	FVector ubicacionInicialNavesFugaces = FVector(1200.0f, -450.0f, 200.0f);

	// Generar Naves Fugaces en las esquinas
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesFugaces.X, ubicacionInicialNavesFugaces.Y + i * 1200, ubicacionInicialNavesFugaces.Z);
		ANaveEnemiga* NuevaNaveFugaz = AFabricaDeNaves::FabricarNave("NaveFugaz", GetWorld(), PosicionNaveActual, FRotator(0.0f, 180.0f, 0.0f));
		//NaveFugaz = GetWorld()->SpawnActor<ANaveFugaz>(PosicionNaveActual, FRotator::ZeroRotator);
		NuevaNaveFugaz->EstablecerRadar(Radar);
		//NaveFugaz->EstablecerRadar(Radar);
		Naves.Add(NuevaNaveFugaz);
	}

	// Generar Naves Tanques
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesTanques.X, ubicacionInicialNavesTanques.Y + i * 500, ubicacionInicialNavesTanques.Z);
		ANaveEnemiga* NuevaNaveTanque = AFabricaDeNaves::FabricarNave("NaveTanque", GetWorld(), PosicionNaveActual, FRotator(0.0f, 180.0f, 0.0f));
		//NaveTanque = GetWorld()->SpawnActor<ANaveTanque>(PosicionNaveActual, FRotator::ZeroRotator);
		NuevaNaveTanque->EstablecerRadar(Radar);
		//NaveTanque->EstablecerRadar(Radar);
		Naves.Add(NuevaNaveTanque);
	}

	// Generar Naves Caza
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(ubicacionInicialNavesCazas.X, ubicacionInicialNavesCazas.Y + i * 200, ubicacionInicialNavesCazas.Z);
		ANaveEnemiga* NuevaNaveCaza = AFabricaDeNaves::FabricarNave("NaveCaza", GetWorld(), PosicionNaveActual, FRotator(0.0f, 180.0f, 0.0f));
		//NaveCaza = GetWorld()->SpawnActor<ANaceCaza>(PosicionNaveActual, FRotator::ZeroRotator);
		NuevaNaveCaza->EstablecerRadar(Radar);
		//NaveCaza->EstablecerRadar(Radar); 
		Naves.Add(NuevaNaveCaza);
	}
}

//void AAgujeroNegro::SetContadorNaves(int _Contador)
//{
//	//GEngine->AddOnScreenDebugMessage(-50, 150.f, FColor::Green, FString::Printf(TEXT("Contador de Naves: %d"), _Contador));
//	ContadorNaves = ContadorNaves-_Contador;
//}




