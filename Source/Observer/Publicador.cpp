// Fill out your copyright notice in the Description page of Project Settings.


#include "Publicador.h"
#include "Suscriptora.h"

// Sets default values
APublicador::APublicador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Suscriptores = TArray<AActor*>();
}

// Called when the game starts or when spawned
void APublicador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicador::Suscribirse(AActor* _Suscriptor)
{
	Suscriptores.Add(_Suscriptor);
}

void APublicador::Desuscribirse(AActor* _Suscriptor)
{
	Suscriptores.Remove(_Suscriptor);
}

void APublicador::Notificar()
{
	for (AActor* Sub : Suscriptores)
	{
		ISuscriptora* Suscriptora = Cast<ISuscriptora>(Sub);
		if (Suscriptora)
		{
			Suscriptora->Actualizar(this);
		}
	}
}

