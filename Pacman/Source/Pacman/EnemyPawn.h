// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemyPawn.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Default,
	Idle
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyStateChangedEvent, EEnemyState, NewState);

UCLASS()
class PACMAN_API AEnemyPawn : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EEnemyState State = EEnemyState::Default;

	UFUNCTION(BlueprintCallable)
		void Hunt();
	
	UFUNCTION(BlueprintCallable)
		void Idle();

	FEnemyStateChangedEvent& OnStateChanged() { return stateChangedEvent; }
private:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FEnemyStateChangedEvent stateChangedEvent;
};
