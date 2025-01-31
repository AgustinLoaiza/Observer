// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obrero.h"
#include "HansKundt.generated.h"

class IObrero;

UCLASS()
class OBSERVER_API AHansKundt : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHansKundt();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void ConstruirBoqueron(FVector UbicacionBoqueron, FRotator Rotacion);
	void SetObrero(AActor* Albaco);
	class ABoqueron* GetBoqueron();
	IObrero* Obrero;

};
