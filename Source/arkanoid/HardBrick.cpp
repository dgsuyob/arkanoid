// Fill out your copyright notice in the Description page of Project Settings.


#include "HardBrick.h"
#include "Ball.h"



AHardBrick::AHardBrick()
{
}

void AHardBrick::DestroyBrick()
{
	
}
void AHardBrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Ball")) {

		ABall* MyBall = Cast<ABall>(OtherActor);

		FVector BallVelocity = MyBall->GetVelocity();
		BallVelocity *= (SpeedModifierOnBounce - 1.0f);

		MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);

		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &AHardBrick::DestroyBrick, 0.1f, false);
	}
}
