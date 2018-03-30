// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ClearBlkboardValue.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUND_API UClearBlkboardValue : public UBTTaskNode
{
	GENERATED_BODY()

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "Setup")
		struct FBlackboardKeySelector KeyToClear;

private:
	TArray<AActor*> PatrolPoints;
};
