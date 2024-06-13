// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obrero.h"
#include "Ingeniero.generated.h"

UCLASS()
class OBSERVER_API AIngeniero : public AActor, public IObrero
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIngeniero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion) override;
	virtual void BuildMesh() override;
	virtual void BuildDisparador() override;
	virtual void BuildEscudo() override;
	virtual void BuildMuroEspinas() override;
	virtual void BuildTrampaChina() override;
	class UStaticMesh* SuperBoqueron = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	virtual class ABoqueron* GetBoqueron() override;
	ABoqueron* Boqueron;
};
