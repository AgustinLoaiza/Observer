// Fill out your copyright notice in the Description page of Project Settings.


#include "Boqueron.h"
#include "Disparador.h"
#include "Escudo.h"
#include "MuroEspinas.h"
#include "TrampaChina.h"

// Sets default values
ABoqueron::ABoqueron()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshBoqueron = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Boqueron"));
	MeshBoqueron->SetupAttachment(RootComponent);
	RootComponent = MeshBoqueron;
}

// Called when the game starts or when spawned
void ABoqueron::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoqueron::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido >= 5.0f)
	{
		BuildDisparador();
		BuildEscudo();
		BuildMuroEspinas();
		BuildTrampaChina();

		TiempoTranscurrido = 0.0f;
	}
	UbicacionBoqueron = GetActorLocation();
}

void ABoqueron::SetMesh(UStaticMeshComponent* _MeshBoqueron)
{
	MeshBoqueron = _MeshBoqueron;
}

void ABoqueron::SetDisparador(FString _Disparador)
{
	Disparador = _Disparador;
}

void ABoqueron::SetEscudo(FString _Escudo)
{
	Escudo = _Escudo;
}

void ABoqueron::SetMuroEspinas(FString _MuroEspinas)
{
	MuroEspinas = _MuroEspinas;
}

void ABoqueron::SetTrampaChina(FString _TrampaChina)
{
	TrampaChina = _TrampaChina;
}

void ABoqueron::BuildDisparador()
{
	if (contador1 >= 1)
	{
		return;
	}
	if (Disparador == "Disparador")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionDisparador1 = UbicacionBoqueron + FVector(0.0f, 200.0f, 0.0f);
			FVector ubicacionDisparador2 = UbicacionBoqueron + FVector(0.0f, -200.0f, 0.0f);
			FVector ubicacionDisparador3 = UbicacionBoqueron + FVector(-200.0f, 0.0f, 0.0f);
			FVector ubicacionDisparador4 = UbicacionBoqueron + FVector(-200.0f, 100.0f, 0.0f);
			FVector ubicacionDisparador5 = UbicacionBoqueron + FVector(-200.0f, -100.0f, 0.0f);
			newDisparador = World->SpawnActor<ADisparador>(ubicacionDisparador1, FRotator::ZeroRotator);
			newDisparador = World->SpawnActor<ADisparador>(ubicacionDisparador2, FRotator::ZeroRotator);
			newDisparador = World->SpawnActor<ADisparador>(ubicacionDisparador3, FRotator::ZeroRotator);
			newDisparador = World->SpawnActor<ADisparador>(ubicacionDisparador4, FRotator::ZeroRotator);
			newDisparador = World->SpawnActor<ADisparador>(ubicacionDisparador5, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se crearon los disparadores"));
		}
	}
	contador1++;
}

void ABoqueron::BuildEscudo()
{
	if (contador2 >= 1)
	{
		return;
	}
	if (Escudo == "Escudo")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionEscudo1 = UbicacionBoqueron + FVector(-300.0f, -100.0f, 0.0f);
			FVector ubicacionEscudo2 = UbicacionBoqueron + FVector(-300.0f, 0.0f, 0.0f);
			FVector ubicacionEscudo3 = UbicacionBoqueron + FVector(-300.0f, 100.0f, 0.0f);
			newEscudo = World->SpawnActor<AEscudo>(ubicacionEscudo1, FRotator::ZeroRotator);
			newEscudo = World->SpawnActor<AEscudo>(ubicacionEscudo2, FRotator::ZeroRotator);
			newEscudo = World->SpawnActor<AEscudo>(ubicacionEscudo3, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Escudo"));
		}
	}
	contador2++;
}

void ABoqueron::BuildMuroEspinas()
{
	if (contador3 >= 1)
	{
		return;
	}
	if (MuroEspinas == "MuroEspinas")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionMuroEspinas1 = UbicacionBoqueron + FVector(300.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas2 = UbicacionBoqueron + FVector(300.0f, -200.0f, 0.0f);
			FVector ubicacionMuroEspinas3 = UbicacionBoqueron + FVector(300.0f, -100.0f, 0.0f);
			FVector ubicacionMuroEspinas4 = UbicacionBoqueron + FVector(300.0f, 0.0f, 0.0f);
			FVector ubicacionMuroEspinas5 = UbicacionBoqueron + FVector(300.0f, 100.0f, 0.0f);
			FVector ubicacionMuroEspinas6 = UbicacionBoqueron + FVector(300.0f, 200.0f, 0.0f);
			FVector ubicacionMuroEspinas7 = UbicacionBoqueron + FVector(300.0f, 300.0f, 0.0f);

			FVector ubicacionMuroEspinas8 = UbicacionBoqueron + FVector(200.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas9 = UbicacionBoqueron + FVector(100.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas10 = UbicacionBoqueron + FVector(0.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas11 = UbicacionBoqueron + FVector(-100.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas12 = UbicacionBoqueron + FVector(200.0f, 300.0f, 0.0f);
			FVector ubicacionMuroEspinas13 = UbicacionBoqueron + FVector(100.0f, 300.0f, 0.0f);
			FVector ubicacionMuroEspinas14 = UbicacionBoqueron + FVector(0.0f, 300.0f, 0.0f);
			FVector ubicacionMuroEspinas15 = UbicacionBoqueron + FVector(-100.0f, 300.0f, 0.0f);

			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas1, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas2, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas3, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas4, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas5, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas6, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas7, FRotator::ZeroRotator);

			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas8, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas9, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas10, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas11, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas12, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas13, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas14, FRotator::ZeroRotator);
			newMuroEspinas = World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas15, FRotator::ZeroRotator);

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Muro de Espinas"));
		}
	}
	contador3++;
}

void ABoqueron::BuildTrampaChina()
{
	if (TrampaChina != "")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionChino1 = UbicacionBoqueron + FVector(-500.0f, 200.0f, 0.0f);
			FVector ubicacionChino2 = UbicacionBoqueron + FVector(-300.0f, 350.0f, 0.0f);
			FVector ubicacionChino3 = UbicacionBoqueron + FVector(-400.0f, -350.0f, 0.0f);
			FVector ubicacionChino4 = UbicacionBoqueron + FVector(-500.0f, -500.0f, 0.0f);
			newTrampaChina = World->SpawnActor<ATrampaChina>(ubicacionChino1, FRotator::ZeroRotator);
			newTrampaChina = World->SpawnActor<ATrampaChina>(ubicacionChino2, FRotator::ZeroRotator);
			newTrampaChina = World->SpawnActor<ATrampaChina>(ubicacionChino3, FRotator::ZeroRotator);
			newTrampaChina = World->SpawnActor<ATrampaChina>(ubicacionChino4, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Componente Chino"));
		}
	}
}
