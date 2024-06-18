// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia.h"

ACapsulaEnergia::ACapsulaEnergia()
{
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Energia/2cb5f69d562a_healing_potion__3d_.2cb5f69d562a_healing_potion__3d_'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}
