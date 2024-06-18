// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteBorracho.h"

// Sets default values for this component's properties
UComponenteBorracho::UComponenteBorracho()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	verificar = false;
	Velocidad = 550.0f;
	TiempoTranscurrido = 0;
}


// Called when the game starts
void UComponenteBorracho::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteBorracho::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	MostrarMovimiento(DeltaTime); 
}

void UComponenteBorracho::MostrarMovimiento(float DeltaTime)
{
	if (verificar)
	{
		TiempoTranscurrido++;
		if (TiempoTranscurrido < 200)
		{
			AActor* Parent = GetOwner();
			if (Parent)
			{
				auto NewPos = Parent->GetActorLocation() + FVector(FMath::RandRange(-100.0f, 100.0f) + Velocidad * DeltaTime, FMath::RandRange(-100.0f, 100.0f) + Velocidad * DeltaTime, 0.0f);
				Parent->SetActorLocation(NewPos);
			}
		}
		else
		{
			verificar = false;
		}
	}
}

void UComponenteBorracho::ActivarMovimiento()
{
	verificar = true;
}

