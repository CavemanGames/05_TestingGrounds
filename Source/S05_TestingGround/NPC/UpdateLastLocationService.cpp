// Fill out your copyright notice in the Description page of Project Settings.

#include "UpdateLastLocationService.h"
#include "BehaviorTree/BlackboardComponent.h"


void UUpdateLastLocationService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();

	TempActor = (AActor*)BlackboardComp->GetValueAsObject(Enemy.SelectedKeyName);

	if (TempActor)
	{
		BlackboardComp->SetValueAsVector(LastKnownLocationKey.SelectedKeyName, TempActor->GetActorLocation());
	}
	else
	{
		//BlackboardComp->ClearValue(LastKnownLocationKey.SelectedKeyName);
	}
}

