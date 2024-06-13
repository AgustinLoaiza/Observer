// Fill out your copyright notice in the Description page of Project Settings.


#include "HansKundt.h"

// Sets default values
AHansKundt::AHansKundt()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHansKundt::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHansKundt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHansKundt::SetObrero(AActor* Albaco)
{
	Obrero = Cast<IObrero>(Albaco);

	if (!Obrero)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se puede construir el Fortin"));
	}
}

ABoqueron* AHansKundt::GetBoqueron()
{
	if (Obrero)
	{
		return Obrero->GetBoqueron();
	}

	UE_LOG(LogTemp, Error, TEXT("GetBoqueron(): Return nullptr"));
	return nullptr;
}

void AHansKundt::ConstruirBoqueron(FVector UbicacionBoqueron, FRotator Rotacion)
{
	if (!Obrero)
	{
		UE_LOG(LogTemp, Error, TEXT("No se puede construir Boqueron"));
		return;
	}
	Obrero->BuildBoqueron(UbicacionBoqueron, Rotacion);
	Obrero->BuildMesh();
	Obrero->BuildDisparador();
	Obrero->BuildEscudo();
	Obrero->BuildMuroEspinas();
	Obrero->BuildTrampaChina();
}

