// Fill out your copyright notice in the Description page of Project Settings.


#include "AINavMovementComponent.h"

void UAINavMovementComponent::RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed)
{
	ATank* Tank = Cast<ATank>(GetOwner());
	if (!Tank) return;

	auto TankForwardRotator = GetOwner()->GetActorForwardVector().Rotation();
	auto AIForwardIntentionRotator = MoveVelocity.GetSafeNormal().Rotation();
	auto DeltaRotator = AIForwardIntentionRotator - TankForwardRotator;
	//Tank->AddActorWorldRotation(FRotator(0, DeltaRotator.Yaw, 0));
	Tank->AddActorWorldRotation(FRotator(0, DeltaRotator.Yaw * GetWorld()->DeltaTimeSeconds, 0));
	Tank->AIMoveForward(1);
}