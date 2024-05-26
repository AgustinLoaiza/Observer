// Fill out your copyright notice in the Description page of Project Settings.


#include "BalaMortero.h"
#include "ObserverProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "ObserverPawn.h"

// Sets default values
ABalaMortero::ABalaMortero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BombMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));
	BombMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BombMesh"));
	BombMesh->SetStaticMesh(BombMeshAsset.Object);
	//BombMesh->SetupAttachment(RootComponent);
	RootComponent = BombMesh;
	
	//tamano de la bomba
	BombMesh->SetRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));
	bInitialized = false;
	velocidad = 600.0f;
}

// Called when the game starts or when spawned
void ABalaMortero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABalaMortero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ABalaMortero::Mover(float DeltaTime)
{
	if (!bInitialized)
	{
		FVector StartLocation = GetActorLocation();
		FVector EndLocation = UltimaPosicionJugador;

		// Ajustar la altura en Z para mantenerla constante
		StartLocation.Z = 250.0f;
		EndLocation.Z = 250.0f;

		// Calcular la dirección normalizada desde el cañón hasta el jugador
		Direction = (EndLocation - StartLocation).GetSafeNormal();
		bInitialized = true;
	}

	// Mover el proyectil en línea recta hacia el jugador manteniendo constante la altura en Z
	FVector NewLocation = GetActorLocation() + Direction * velocidad * DeltaTime;
	NewLocation.Z = 250.0f; // mantener constante la altura en Z

	SetActorLocation(NewLocation);
}

void ABalaMortero::SetUltimaPosicionJugador(FVector Posicion)
{
	UltimaPosicionJugador = Posicion; 
}

void ABalaMortero::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Pawn=Cast<AObserverPawn>(OtherActor);
	if (Pawn)
	{
		//Pawn->RecibirDanio();
		//Destroy();
	}
}

