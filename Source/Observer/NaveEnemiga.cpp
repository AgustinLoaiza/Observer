// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Radar.h"
#include "ObserverGameMode.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Escape = false;
	retorno = false;
	
		
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
	Huir(DeltaTime); 

}

void ANaveEnemiga::EstablecerRadar(ARadar* _Radar)
{
	if (!_Radar)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se ha encontrado el radar"));
		return;
	}
		Radar = _Radar;
		Radar->Suscribirse(this);
}

void ANaveEnemiga::Actualizar(APublicador* _Publicador)
{
	Escapar(); 
}

void ANaveEnemiga::Escapar() 
{
	float VidaRecivida = Radar->GetVidaPromedio();
	if (VidaRecivida <= 10)
	{
		Escape = true;
	}
}

void ANaveEnemiga::QuitarSuscripcion() 
{
	if (Radar)
	{
		Radar->Desuscribirse(this); 
	}
}

void ANaveEnemiga::Huir(float DeltaTime)
{
	if (Escape==true)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(),FVector(1700.0f, -147.0f, 215.0f), DeltaTime, 0.5));
		Curarse(); 
	}
	if (GetActorLocation().Equals(FVector(1700.0f, -147.0f, 215.0f),200))
	{
		Escape = false;
		retorno = true;
	}
	
}


