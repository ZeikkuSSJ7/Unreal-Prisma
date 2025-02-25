// Copyright Epic Games, Inc. All Rights Reserved.

#include "PruebasUnrealGameMode.h"
#include "PruebasUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

APruebasUnrealGameMode::APruebasUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
