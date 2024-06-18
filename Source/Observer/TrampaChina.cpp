// Fill out your copyright notice in the Description page of Project Settings.


#include "TrampaChina.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/CollisionProfile.h"
#include "ObserverPawn.h"
#include "TimerManager.h"

ATrampaChina::ATrampaChina()
{
	PrimaryActorTick.bCanEverTick = true;
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Trampa/7382084a3527_Calavera__3d_asset_.7382084a3527_Calavera__3d_asset_'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}

void ATrampaChina::ComprarComponente()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void ATrampaChina::UtilizarComponente(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation()); 
}
