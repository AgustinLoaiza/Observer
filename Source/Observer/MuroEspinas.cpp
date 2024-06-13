// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroEspinas.h"

// Sets default values
AMuroEspinas::AMuroEspinas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	// Create the mesh component
	MeshMuroEspinas = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroEspinas"));
	MeshMuroEspinas->SetStaticMesh(ShipMesh.Object);
	MeshMuroEspinas->SetupAttachment(RootComponent);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	RootComponent = MeshMuroEspinas;
}

// Called when the game starts or when spawned
void AMuroEspinas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuroEspinas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

