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

	AarkanoidGameModeBase();

	UPROPERTY()
		class APaddle* paleta;
private:
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AQueen* reyna;

protected:
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
};