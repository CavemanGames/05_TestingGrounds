// Fill out your copyright notice in the Description page of Project Settings.

#include "FocusAtPointService.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Classes/AIController.h"


void UFocusAtPointService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();

	PointToFocus = (AActor*)BlackboardComp->GetValueAsObject(FocusKey.SelectedKeyName);

	AAIController* AiController = (AAIController*)OwnerComp.GetAIOwner()->GetPawn()->GetController();

	AiController->SetFocus(PointToFocus);
}

