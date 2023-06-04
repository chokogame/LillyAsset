// Copyright Epic Games, Inc. All Rights Reserved.

#include "LillyAssetFreeCPPGameMode.h"
#include "LillyAssetFreeCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALillyAssetFreeCPPGameMode::ALillyAssetFreeCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_Lilly"));//BP�t�@�C����C++�N���X����K���h��������i�R�s�[���ցI�I�j
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_LiIly.BP_LiIly"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
