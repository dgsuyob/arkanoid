// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Queen.generated.h"

UCLASS()
class ARKANOID_API AQueen : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQueen();

private:
	FString brazo;
	FString rostro;
	FString pierna;
	float movimientoX, movimientoY;
	FString proyectil;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void setBrazo(FString myBrazo);
	void setRostro(FString myRostro);
	void setPierna(FString myPierna);
	void setMovimientoX(float myMovimientoX);
	void setMovimientoY(float myMovimientoY);
	void setProyectil(FString myProyectil);
};
