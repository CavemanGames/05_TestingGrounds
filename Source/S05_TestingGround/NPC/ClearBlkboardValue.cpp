// Fill out your copyright notice in the Description page of Project Settings.

#include "ClearBlkboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"


EBTNodeResult::Type UClearBlkboardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();

	BlackboardComp->ClearValue(KeyToClear.SelectedKeyName);

	return EBTNodeResult::Succeeded;
}
