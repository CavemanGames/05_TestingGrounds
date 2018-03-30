// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UpdateLastLocationService.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUND_API UUpdateLastLocationService : public UBTService
{
	GENERATED_BODY()
	
protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "Setup")
		struct FBlackboardKeySelector Enemy;

	UPROPERTY(EditAnywhere, Category = "Setup")
		struct FBlackboardKeySelector LastKnownLocationKey;
	
private:
	AActor * TempActor;
};
