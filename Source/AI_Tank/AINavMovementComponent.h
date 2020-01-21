// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tank.h"

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "AINavMovementComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AI_TANK_API UAINavMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()


	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;
	
};
