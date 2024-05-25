// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadosNaveNodriza.h"
#include "EstadoOfensivo.generated.h"

UCLASS()
class OBSERVER_API AEstadoOfensivo : public AActor, public IEstadosNaveNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoOfensivo();

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
	void EstadoOfensivo() override;
	FORCEINLINE FString GetEstado() override;

private:
	void EstadoDefensivo() override {};
	void EstadoDebil() override {};
};
