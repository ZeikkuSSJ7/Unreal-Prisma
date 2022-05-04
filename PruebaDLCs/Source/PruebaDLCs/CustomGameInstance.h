// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBADLCS_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int levelSelected;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int charSelected;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int teamSelected;
};
