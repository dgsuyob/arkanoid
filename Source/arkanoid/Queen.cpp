// Fill out your copyright notice in the Description page of Project Settings.


#include "Queen.h"

// Sets default values
AQueen::AQueen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AQueen::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQueen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AQueen::setBrazo(FString myBrazo)
{
	brazo = myBrazo;
}

void AQueen::setRostro(FString myRostro)
{
	rostro = myRostro;
}

void AQueen::setPierna(FString myPierna)
{
	pierna = myPierna;
}

void AQueen::setMovimientoX(float myMovimientoX)
{
	movimientoX = myMovimientoX;
}

void AQueen::setMovimientoY(float myMovimientoY)
{
	movimientoY = myMovimientoY;
}

void AQueen::setProyectil(FString myProyectil) {

	proyectil = myProyectil;
}

