// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BalaMortero.generated.h"

UCLASS()
class OBSERVER_API ABalaMortero : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABalaMortero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	class AObserverPawn* Pawn;
	UStaticMeshComponent* BombMesh;
	float velocidad;
	FVector UltimaPosicionJugador;
	FVector Direction;
	bool bInitialized;

	virtual void Mover(float DeltaTime);
	void SetUltimaPosicionJugador(FVector Posicion);
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

};
