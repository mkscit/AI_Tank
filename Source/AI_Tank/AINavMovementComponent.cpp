// Fill out your copyright notice in the Description page of Project Settings.


#include "AINavMovementComponent.h"

void UAINavMovementComponent::RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed)
{
	ATank* Tank = Cast<ATank>(GetOwner());
	if (!Tank) return;
}