// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "arkanoidGameModeBase.generated.h"

/**
 *
 */

class ABrick;

UCLASS()
class ARKANOID_API AarkanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	ABrick* ladrillo01;

};