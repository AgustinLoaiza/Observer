// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ObserverGameMode.generated.h"

UCLASS(MinimalAPI)
class AObserverGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AObserverGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	class ARadar* Radar;
	class ANaceCaza* NaveCaza;
	TArray<class ANaveEnemiga*> Naves;
	class ANaveFugaz* NaveFugaz;
	class ANaveTanque* NaveTanque;

	float VidaPromedio;
};



