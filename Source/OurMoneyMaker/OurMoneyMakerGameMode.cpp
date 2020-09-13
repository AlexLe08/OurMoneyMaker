// Copyright Epic Games, Inc. All Rights Reserved.

#include "OurMoneyMakerGameMode.h"
#include "OurMoneyMakerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOurMoneyMakerGameMode::AOurMoneyMakerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
