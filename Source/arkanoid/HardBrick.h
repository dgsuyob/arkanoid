// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "HardBrick.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API AHardBrick : public ABrick
{
	GENERATED_BODY()
		AHardBrick();
public:
	void DestroyBrick();

protected:
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweep, const FHitResult& SweepResult);
};
