// Copyright Epic Games, Inc. All Rights Reserved.
#include "arkanoidGameModeBase.h"
#include "Brick.h"
#include "Math/Vector.h"
#include "Kismet/GameplayStatics.h"

AarkanoidGameModeBase::AarkanoidGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	TArray<AActor*> Instances;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),
		AarkanoidGameModeBase::StaticClass(), Instances);
	if (Instances.Num() > 1)
	{
		//If exist at least one of them, set the instance with the first found one
		instancia = Cast<AarkanoidGameModeBase>(Instances[0]);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s already exists"),*instancia->GetName()));
		//Then Destroy this Actor
		Destroy();
	}

}

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

void AarkanoidGameModeBase::Tick(float DeltaTime)
{
}
