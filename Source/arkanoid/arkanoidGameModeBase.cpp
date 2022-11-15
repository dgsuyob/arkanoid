// Copyright Epic Games, Inc. All Rights Reserved.
#include "arkanoidGameModeBase.h"
#include "Brick.h"
#include "Math/Vector.h"
#include "Paddle.h"
#include "Queen.h"

AarkanoidGameModeBase::AarkanoidGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AarkanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i <= 4; i++)
	{
		APaddle* spawnedPaleta = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());
		if (spawnedPaleta)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one
			//and log the success string
			paleta = spawnedPaleta;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
				FString::Printf(TEXT("%s has been created"), *paleta->GetName()));
		}
	}
	reyna = GetWorld()->SpawnActor<AQueen>(AQueen::StaticClass());

	reyna->setRostro("expresion");
	reyna->setBrazo("fuerza");
	reyna->setPierna("velocidad");
	reyna->setMovimientoX(0.0f);
	reyna->setMovimientoY(0.0f);
	reyna->setProyectil("zapato");

}

void AarkanoidGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
