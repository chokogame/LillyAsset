// Copyright Epic Games, Inc. All Rights Reserved.

#include "LillyAssetFreeCPPGameMode.h"
#include "LillyAssetFreeCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALillyAssetFreeCPPGameMode::ALillyAssetFreeCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_Lilly"));//BPファイルはC++クラスから必ず派生させる（コピー厳禁！！）
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_LiIly.BP_LiIly"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
