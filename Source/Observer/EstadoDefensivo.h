// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosNaveNodriza.h"
#include "EstadoDefensivo.generated.h"

UCLASS()
class OBSERVER_API AEstadoDefensivo : public AActor, public IEstadosNaveNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoDefensivo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	class ANaveNodriza* NaveNodriza;

public:
	void SetNaveNodriza(class ANaveNodriza* NaveNodriza) override;
	void EstadoDefensivo() override;
	FORCEINLINE FString GetEstado() override;

private:
	void EstadoOfensivo() override {};
	void EstadoDebil() override {};

};
