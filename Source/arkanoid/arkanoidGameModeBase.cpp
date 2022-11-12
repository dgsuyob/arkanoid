// Copyright Epic Games, Inc. All Rights Reserved.
#include "arkanoidGameModeBase.h"
#include "Brick.h"
#include "Math/Vector.h"

void AarkanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	const FVector Ubicacion(-80.0f, 0.0f, 340.0f);
	const FRotator Rotacion(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();

	if (World != nullptr) {
		// Spawn o generacion o creacion de actores en tiempo de ejecucion
		ladrillo01 = World->SpawnActor<ABrick>(Ubicacion, Rotacion);
		ladrillo01->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor ladrillo 01 creado"));

	}
}