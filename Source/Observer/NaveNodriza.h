// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosNaveNodriza.h"
#include "NaveNodriza.generated.h"

UCLASS()
class OBSERVER_API ANaveNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveNodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//Declaramos las caracteristicas de la nave nodriza
public:
	UStaticMeshComponent* NaveNodrizaMesh;

	float vida;

	void RecibirDanio();

//Declaramos todo lo necesario para hacer trabajar los estados de la nave nodriza
public:
	//Inicializar los estados de la nave nodriza
	void InicializarEstadosNaveNodriza();

	//Declaramos los estados de la nave nodriza
	IEstadosNaveNodriza* EstadoDefensivo;
	IEstadosNaveNodriza* EstadoOfensivo;
	IEstadosNaveNodriza* EstadoDebil;
	IEstadosNaveNodriza* Estado;

	//Funciones para cambiar de estado
	FORCEINLINE void EstablecerEstados(IEstadosNaveNodriza* _Estado);

	void Mover(float DeltaTime);
	void Disparar();
	void CrearEscudo();

	//Funciones para obtener los estados
	FORCEINLINE IEstadosNaveNodriza* GetEstado();
	FORCEINLINE IEstadosNaveNodriza* GetEstadoDefensivo();
	FORCEINLINE IEstadosNaveNodriza* GetEstadoOfensivo();
	FORCEINLINE IEstadosNaveNodriza* GetEstadoDebil();
};
