// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tristitia_UE4GameMode.h"
#include "Tristitia_UE4Character.h"
#include "UObject/ConstructorHelpers.h"

ATristitia_UE4GameMode::ATristitia_UE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
