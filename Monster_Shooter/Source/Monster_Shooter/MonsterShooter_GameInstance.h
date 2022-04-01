// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MonsterShooter_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MONSTER_SHOOTER_API UMonsterShooter_GameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
		int enemyCount = 0;
	UPROPERTY(BlueprintReadOnly)
		int enemyFallen = 0;
};
