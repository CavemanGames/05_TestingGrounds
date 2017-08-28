// Fill out your copyright notice in the Description page of Project Settings.

#include "LookAnimationsToRandom.h"


// Sets default values for this component's properties
ULookAnimationsToRandom::ULookAnimationsToRandom()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


TArray<UAnimationAsset*> ULookAnimationsToRandom::GetAnimationList() const
{
	return AnimationsToRamdon;
}

// Called when the game starts
void ULookAnimationsToRandom::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULookAnimationsToRandom::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

