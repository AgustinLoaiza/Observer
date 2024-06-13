// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanosDeAsedio.h"
#include "Boqueron.generated.h"

UCLASS()
class OBSERVER_API ABoqueron : public AActor, public IPlanosDeAsedio
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoqueron();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Disparador;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Escudo;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString MuroEspinas;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString TrampaChina;

	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class ADisparador* newDisparador;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AEscudo* newEscudo;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AMuroEspinas* newMuroEspinas;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class ATrampaChina* newTrampaChina;

public:
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	UStaticMeshComponent* MeshBoqueron;

	FVector UbicacionBoqueron;

	float TiempoTranscurrido = 0.0f;

	float contador1 = 0.0f;
	float contador2 = 0.0f;
	float contador3 = 0.0f;

	//Generacion de murallas
	float espacios = 100.0f;

public:
	void SetMesh(UStaticMeshComponent* _MeshBoqueron) override;
	void SetDisparador(FString _Disparador) override;
	void SetEscudo(FString _Escudo) override;
	void SetMuroEspinas(FString _MuroEspinas) override;
	void SetTrampaChina(FString _TrampaChina) override;
	void BuildDisparador();
	void BuildEscudo();
	void BuildMuroEspinas();
	void BuildTrampaChina();

};
