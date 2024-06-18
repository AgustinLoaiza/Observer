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
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/NaveNodriza/1710aa07ae28_nave_espacial_grand.1710aa07ae28_nave_espacial_grand'"));
	NaveNodrizaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveNodrizaMesh->SetStaticMesh(ShipMesh.Object);
	NaveNodrizaMesh->SetRelativeScale3D(FVector(1.50f, 1.50f, 1.50f)); 

	vida = 200;
}

// Called when the game starts or when spawned
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();

	EstadoDefensivo = GetWorld()->SpawnActor<AEstadoDefensivo>(FVector::ZeroVector, FRotator::ZeroRotator); 
	EstadoOfensivo = GetWorld()->SpawnActor<AEstadoOfensivo>(FVector::ZeroVector, FRotator::ZeroRotator);
	EstadoDebil = GetWorld()->SpawnActor<AEstadoDebil>(FVector::ZeroVector, FRotator::ZeroRotator);

	InicializarEstadosNaveNodriza(); 
}

// Called every frame
void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Disparar();
	Mover(DeltaTime);
}

void ANaveNodriza::RecibirDanio()
{
	vida -= 25;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Vida: " + FString::SanitizeFloat(vida)));
	if (vida <= 0)
	{
		Destroy();
		GEngine->AddOnScreenDebugMessage(-50, 150.f, FColor::Green, FString::Printf(TEXT("VICCC VICCC VICTORIA")), true, FVector2D(5.0f, 5.0f));
	}
	InicializarEstadosNaveNodriza(); 
}

void ANaveNodriza::InicializarEstadosNaveNodriza()
{
	if (vida>=100)
	{
		EstadoDefensivo->SetNaveNodriza(this);
		EstablecerEstados(EstadoDefensivo);
		CrearEscudo(); 
	}
	else if (vida>=50 && vida<100)
	{
		EstadoOfensivo->SetNaveNodriza(this);
		EstablecerEstados(EstadoOfensivo);
	}
	else
	{
		EstadoDebil->SetNaveNodriza(this);
		EstablecerEstados(EstadoDebil);
	}
}

void ANaveNodriza::EstablecerEstados(IEstadosNaveNodriza* _Estado)
{
	Estado = _Estado;
}

void ANaveNodriza::Mover(float DeltaTime)
{
	Estado->Mover(DeltaTime);
}

void ANaveNodriza::Disparar()
{
	Estado->Disparar();
}

void ANaveNodriza::CrearEscudo()
{
	Estado->CrearEscudo();
}

IEstadosNaveNodriza* ANaveNodriza::GetEstado()
{
	return Estado;
}

IEstadosNaveNodriza* ANaveNodriza::GetEstadoDefensivo()
{
	return EstadoDefensivo;
}

IEstadosNaveNodriza* ANaveNodriza::GetEstadoOfensivo()
{
	return EstadoOfensivo;
}

IEstadosNaveNodriza* ANaveNodriza::GetEstadoDebil()
{
	return EstadoDebil;
}

