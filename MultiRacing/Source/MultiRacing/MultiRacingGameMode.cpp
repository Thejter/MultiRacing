// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiRacingGameMode.h"
#include "MultiRacingPawn.h"
#include "MultiRacingHud.h"

AMultiRacingGameMode::AMultiRacingGameMode()
{
	DefaultPawnClass = AMultiRacingPawn::StaticClass();
	HUDClass = AMultiRacingHud::StaticClass();
}
