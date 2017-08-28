// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChoseNextWaypoint.generated.h"

/**
 *
 */
UCLASS()
class S05_TESTINGGROUND_API UChoseNextWaypoint : public UBTTaskNode
{
	GENERATED_BODY()

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "Setup")
		struct FBlackboardKeySelector IndexKey;
	UPROPERTY(EditAnywhere, Category = "Setup")
		struct FBlackboardKeySelector Waypoint;

private:
	TArray<AActor*> PatrolPoints;
};
