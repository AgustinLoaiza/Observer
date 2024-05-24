// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Radar.h""

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Energia=100;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemiga::EstablecerRadar(ARadar* _Radar)
{
	if (!_Radar)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se ha encontrado el radar"));
		return;
	}
		Radar = _Radar;
		Radar->Suscribir(this);
}

void ANaveEnemiga::Actualizar(APublicador* _Publicador)
{
	Escapar(); 
}

void ANaveEnemiga::Escapar() 
{ 
}

void ANaveEnemiga::QuitarSuscripcion() 
{
	if (Radar)
	{
		Radar->Desuscribir(this); 
	}
}

void ANaveEnemiga::MoverExpired()
{
}

