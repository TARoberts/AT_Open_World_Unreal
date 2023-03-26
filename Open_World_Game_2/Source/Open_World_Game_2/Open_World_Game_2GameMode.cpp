// Copyright Epic Games, Inc. All Rights Reserved.

#include "Open_World_Game_2GameMode.h"
#include "Open_World_Game_2Character.h"
#include "UObject/ConstructorHelpers.h"

AOpen_World_Game_2GameMode::AOpen_World_Game_2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
