// Copyright Epic Games, Inc. All Rights Reserved.

#include "PruebaDLCsGameMode.h"
#include "PruebaDLCsCharacter.h"
#include "UObject/ConstructorHelpers.h"

APruebaDLCsGameMode::APruebaDLCsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
