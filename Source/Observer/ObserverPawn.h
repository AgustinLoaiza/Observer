// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Estrategia.h"
#include "Originador.h"
#include "EntradaVisitable.h"
#include "ObserverPawn.generated.h"

UCLASS(Blueprintable)
class AObserverPawn : public APawn, public IOriginador, public IEntradaVisitable
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	AObserverPawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	//void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	//void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

public:
	//Creamos una funcion BeginPlay
	virtual void BeginPlay() override;
	// Estrategias
	class IEstrategia* Estrategia;
	class AEstrategiaLigera* EstrategiaLigera;
	class AEstrategiaPesada* EstrategiaPesada;
	class AEstrategiaMultiple* EstrategiaMultiple;

	void DeteccionNavesEnemigas();
	void AlternarEstrategia(class IEstrategia* _Estrategia);

	// Naves enemigas
	TArray<class AActor*> NavesEnemigas; 

public:
	//Memento
	void GuardarEstado(class IMemento* Memento) override;
	void SetVidas(int _Vidas);
	void SetEnergia(int _Energia);
	void SetPosicionMuerte(FVector _PosicionMuerte);
	int ObtenerVidas() const;
	int ObtenerEnergia() const;
	FVector ObtenerPosicionMuerte() const;

	int Energia;
	class AMementoVivere* MementoVivere;

public:
	//Visitor
	void Accept(class IVisitor* _Visitor) override;
	void AplicarAccion();
	
private:
	int Vidas;
	
	FVector PosicionMuerte;

};

