// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_PUBLISHGameMode.h"
#include "UE5_PUBLISHCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_PUBLISHGameMode::AUE5_PUBLISHGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
