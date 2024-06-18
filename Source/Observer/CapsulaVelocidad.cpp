// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVelocidad.h"

ACapsulaVelocidad::ACapsulaVelocidad()
{
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Assets/Velocidad/f5dd03f91b9e_Motor__3d_asset_0_g.f5dd03f91b9e_Motor__3d_asset_0_g'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}
