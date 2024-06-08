// Fill out your copyright notice in the Description page of Project Settings.


#include "MementoVivere.h"
#include "Originador.h"

// Sets default values
AMementoVivere::AMementoVivere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMementoVivere::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMementoVivere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMementoVivere::RestaurarEstado(IOriginador* _originador)
{
	Originador=Cast<IOriginador>(_originador);
	if (Originador)
	{
		Originador->GuardarEstado(this);
	}
}

