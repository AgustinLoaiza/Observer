// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObserverGameMode.h"
#include "ObserverPawn.h"

AObserverGameMode::AObserverGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AObserverPawn::StaticClass();
}

