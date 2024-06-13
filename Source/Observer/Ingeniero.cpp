// Fill out your copyright notice in the Description page of Project Settings.


#include "Ingeniero.h"
#include "Disparador.h"
#include "Escudo.h"
#include "MuroEspinas.h"
#include "TrampaChina.h"
#include "Boqueron.h"

// Sets default values
AIngeniero::AIngeniero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIngeniero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIngeniero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIngeniero::BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion)
{
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass(), UbicacionBoqueron, Rotacion);
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Surtidor():Lodging is NULL, make sure it's initialized.")); return; } 
}

void AIngeniero::BuildMesh()
{
	Boqueron->MeshBoqueron->SetStaticMesh(SuperBoqueron);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MallaBoqueron"));
}

void AIngeniero::BuildDisparador()
{
	Boqueron->SetDisparador("Disparador");
}

void AIngeniero::BuildEscudo()
{
	Boqueron->SetEscudo("Escudo");
}

void AIngeniero::BuildMuroEspinas()
{
	Boqueron->SetMuroEspinas("MuroEspinas");
}

void AIngeniero::BuildTrampaChina()
{
	Boqueron->SetTrampaChina("TrampaChina");
}

ABoqueron* AIngeniero::GetBoqueron()
{
	return Boqueron;
}

