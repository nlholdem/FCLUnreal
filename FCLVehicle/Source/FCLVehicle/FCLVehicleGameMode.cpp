// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FCLVehicleGameMode.h"
#include "FCLVehiclePawn.h"
#include "FCLVehicleHud.h"

AFCLVehicleGameMode::AFCLVehicleGameMode()
{
	DefaultPawnClass = AFCLVehiclePawn::StaticClass();
	HUDClass = AFCLVehicleHud::StaticClass();
}
