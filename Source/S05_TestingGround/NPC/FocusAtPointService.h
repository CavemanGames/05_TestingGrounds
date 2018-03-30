// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FocusAtPointService.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUND_API UFocusAtPointService : public UBTService
{
	GENERATED_BODY()
	
protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "Setup")
		struct FBlackboardKeySelector FocusKey;

private:
	AActor * PointToFocus;
};
