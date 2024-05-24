// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Suscriptora.h"
#include "Socorro.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class OBSERVER_API ANaveEnemiga : public AActor, public ISuscriptora, public ISocorro
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

	int velocidad;

public:
	void EstablecerRadar(class ARadar* _Radar);
	void Actualizar(class APublicador* _Publicador) override;
	void Escapar() override;
	void QuitarSuscripcion();

	virtual void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	virtual void MoverExpired();
	virtual void Disparar(FVector FireDiretion) PURE_VIRTUAL(ANaveEnemiga::Disparar, );
	virtual void RecibirDanio() PURE_VIRTUAL(ANaveEnemiga::RecibirDanio, );
	virtual void Curarse() PURE_VIRTUAL(ANaveEnemiga::Curarse, );

};
