// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonVRGameMode.h"
#include "ThirdPersonVRCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonVRGameMode::AThirdPersonVRGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
