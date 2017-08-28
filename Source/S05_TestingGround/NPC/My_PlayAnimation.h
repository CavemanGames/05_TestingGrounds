// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"
#include "TimerManager.h"
#include "Components/SkeletalMeshComponent.h"
#include "BehaviorTree/BTTaskNode.h"
#include "My_PlayAnimation.generated.h"

/**
 *
 */
UCLASS()
class S05_TESTINGGROUND_API UMy_PlayAnimation : public UBTTaskNode
{
	GENERATED_UCLASS_BODY()

		/** Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling */
		//UPROPERTY(Category = Node, EditAnywhere)
		UAnimationAsset* AnimationToPlay;

	UPROPERTY(Category = Node, EditAnywhere)
		uint32 bLooping : 1;

	/** if true the task will just trigger the animation and instantly finish. Fire and Forget. */
	UPROPERTY(Category = Node, EditAnywhere)
		uint32 bNonBlocking : 1;

	UPROPERTY()
		UBehaviorTreeComponent* MyOwnerComp;

	UPROPERTY()
		USkeletalMeshComponent* CachedSkelMesh;

	EAnimationMode::Type PreviousAnimationMode;

	FTimerDelegate TimerDelegate;
	FTimerHandle TimerHandle;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

	void OnAnimationTimerDone();

#if WITH_EDITOR
	virtual FName GetNodeIconName() const override;
#endif // WITH_EDITOR

protected:
	void CleanUp(UBehaviorTreeComponent& OwnerComp);

private:
	TArray<UAnimationAsset*> AnimationsList;
};
