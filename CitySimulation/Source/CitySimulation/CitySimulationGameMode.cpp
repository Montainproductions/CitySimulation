// Copyright Epic Games, Inc. All Rights Reserved.

#include "CitySimulationGameMode.h"
#include "CitySimulationCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACitySimulationGameMode::ACitySimulationGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
