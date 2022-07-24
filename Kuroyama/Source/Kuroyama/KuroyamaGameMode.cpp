// Copyright Epic Games, Inc. All Rights Reserved.

#include "KuroyamaGameMode.h"
#include "KuroyamaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKuroyamaGameMode::AKuroyamaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
