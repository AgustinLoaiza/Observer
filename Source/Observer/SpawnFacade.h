// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnFacade.generated.h"

UCLASS()
class OBSERVER_API ASpawnFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	TArray<FString> Tormenta;
	TArray<class AFuerzaNatural*> Fenomeno;

	class AAgujeroNegro* AgujeroNegro;
	class AAgujeroBlanco* AgujeroBlanco;

public:
	void PermitirTormenta(TArray<FString>_Tormenta, TArray<class AFuerzaNatural*>_Fenomeno);
	void lluviadeMeteoritos();
	void lluviadeCometas();
	void dropsCapsulas();
	void OrdaNaves();

};
