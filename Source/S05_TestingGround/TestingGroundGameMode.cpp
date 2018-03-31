// Fill out your copyright notice in the Description page of Project Settings.

#include "TestingGroundGameMode.h"
#include "S05_TestingGroundHUD.h"
#include "Player/FirstPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingGroundGameMode::ATestingGroundGameMode() : Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_TestingGroundHUD::StaticClass();
}