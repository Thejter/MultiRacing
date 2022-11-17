// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MultiRacingHud.generated.h"

UCLASS(config = Game)
class AMultiRacingHud : public AHUD
{
	GENERATED_BODY()

public:
	AMultiRacingHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
