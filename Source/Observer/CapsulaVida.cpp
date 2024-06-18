// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVida.h"

ACapsulaVida::ACapsulaVida()
{
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Corazon/1aaf8f215769_corazon__3d_asset_0.1aaf8f215769_corazon__3d_asset_0'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}
