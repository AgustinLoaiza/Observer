// Fill out your copyright notice in the Description page of Project Settings.


#include "FuerzaNatural.h"

// Sets default values
AFuerzaNatural::AFuerzaNatural()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFuerzaNatural::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFuerzaNatural::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFuerzaNatural::CrearOrden(const FString& _Orden)
{
	if (_Orden == "Meteoro")
	{
		GenerarMeteoros();
	}
	else if (_Orden == "Cometa")
	{
		GenerarCometas();
	}
	else if (_Orden == "Capsula")
	{
		GenerarCapsulas();
	}
}

void AFuerzaNatural::RecibirOrden(const TArray<FString>& _Orden)
{
	for (const FString& Orden : _Orden)
	{
		CrearOrden(Orden);
	}
}
