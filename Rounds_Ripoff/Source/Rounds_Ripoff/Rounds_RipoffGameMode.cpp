// Copyright Epic Games, Inc. All Rights Reserved.

#include "Rounds_RipoffGameMode.h"
#include "Rounds_RipoffCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARounds_RipoffGameMode::ARounds_RipoffGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
