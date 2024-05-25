// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "EstadosNaveNodriza.h"
#include "EstadoDefensivo.h"
#include "EstadoOfensivo.h"
#include "EstadoDebil.h"

// Sets default values
ANaveNodriza::ANaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveNodriza::InicializarEstadosNaveNodriza(FString _Estados)
{
	/*if (_Estados.Equals("Estado Defensivo"))
	{
		EstadoDefensivo=GetWorld()
	}*/
}

void ANaveNodriza::EstablecesEstados(IEstadosNaveNodriza* _Estado)
{
}

void ANaveNodriza::NodrizaEstadoDefensivo()
{
}

void ANaveNodriza::NodrizaEstadoOfensivo()
{
}

void ANaveNodriza::NodrizaEstadoDebil()
{
}

IEstadosNaveNodriza* ANaveNodriza::GetEstado()
{
	return nullptr;
}

IEstadosNaveNodriza* ANaveNodriza::GetEstadoDefensivo()
{
	return nullptr;
}

IEstadosNaveNodriza* ANaveNodriza::GetEstadoOfensivo()
{
	return nullptr;
}

IEstadosNaveNodriza* ANaveNodriza::GetEstadoDebil()
{
	return nullptr;
}

FString ANaveNodriza::GetEstadoActual()
{
	return FString();
}

