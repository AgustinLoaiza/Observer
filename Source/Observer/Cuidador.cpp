// Fill out your copyright notice in the Description page of Project Settings.


#include "Cuidador.h"
#include "MementoVivere.h"
#include "ObserverPawn.h"

// Sets default values
ACuidador::ACuidador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACuidador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACuidador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACuidador::Guardar(AObserverPawn* _Pawn)
{
	if (_Pawn)
	{
		if (MementoVivere)
		{
			MementoVivere->ConditionalBeginDestroy(); // Lo que hace este metodo es limpiar la memoria anterior, es una forma de administrar de mejor manera la memoria
		}
		MementoVivere = GetWorld()->SpawnActor<AMementoVivere>(AMementoVivere::StaticClass());
		_Pawn->GuardarEstado(MementoVivere);
	}
}

void ACuidador::Cargar(AObserverPawn* _Pawn)
{
	if (_Pawn && MementoVivere)
	{
		MementoVivere->RestaurarEstado();
	}
}

