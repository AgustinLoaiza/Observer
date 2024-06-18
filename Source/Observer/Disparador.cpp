// Fill out your copyright notice in the Description page of Project Settings.


#include "Disparador.h"
#include "ObserverProjectile.h"

// Sets default values
ADisparador::ADisparador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Assets/Disparadores/97251834d890_Low_poly_cannon__st.97251834d890_Low_poly_cannon__st'"));
	// Create the mesh component
	MeshDisparador = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Disparador"));
	MeshDisparador->SetStaticMesh(ShipMesh.Object);
	MeshDisparador->SetupAttachment(RootComponent);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	RootComponent = MeshDisparador;

	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.5f;

}

// Called when the game starts or when spawned
void ADisparador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADisparador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector FireDirection = FVector(-1.f, 0.f, 0.f);

	Disparar(FireDirection);

}

void ADisparador::Disparar(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AObserverProjectile>(SpawnLocation, FireRotation);
			}
			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ADisparador::ShotTimerExpired, FireRate);

			bCanFire = false;

		}
	}
}

void ADisparador::ShotTimerExpired()
{
	bCanFire = true;
}

void ADisparador::Dureza()
{
	vida -= 5;
	if (vida <= 0)
	{
		Destroy();
	}
}

