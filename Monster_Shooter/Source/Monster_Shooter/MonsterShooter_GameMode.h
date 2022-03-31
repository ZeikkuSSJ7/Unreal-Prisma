// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MonsterShooter_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class MONSTER_SHOOTER_API AMonsterShooter_GameMode : public AGameMode
{
	GENERATED_BODY()

public:
	void RestartGameplay(bool won);
	UPROPERTY(BlueprintReadOnly)
		int timerCount = 300;

	void BeginPlay() override;
private:
	void ResetLevel() override;
	FTimerHandle countDownTimerHandle = FTimerHandle();

	void CountdownTimer();
	
};
