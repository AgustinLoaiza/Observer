// Fill out your copyright notice in the Description page of Project Settings.


#include "Radar.h"

ARadar::ARadar()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARadar::BeginPlay()
{
	Super::BeginPlay();
}

void ARadar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARadar::VidaNave()
{
	Notificar();
}

void ARadar::SetVidaPromedio(float _VidaPromedio)
{
	VidaPromedio = _VidaPromedio;
	VidaNave();
}

float ARadar::GetVidaPromedio()
{
	return VidaPromedio;
}
