// Copyright Epic Games, Inc. All Rights Reserved.

#include "CryptoRaiderGameMode.h"
#include "CryptoRaiderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACryptoRaiderGameMode::ACryptoRaiderGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
