// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Paddle.h"
#include "GameFramework/PlayerController.h"
#include "Paddle_Player_Controller.generated.h"

class ABall;
/**
 * 
 */
UCLASS()
class ARKANOID_API APaddle_Player_Controller : public APlayerController
{
	GENERATED_BODY()

public:
	APaddle_Player_Controller();
	
	UFUNCTION()
	virtual void SetupInputComponent() override;
	UPROPERTY()
		APaddle* myPawn;
protected:
	virtual void BeginPlay() override;
	void MoveHorizontal(float AxisValue);

	
};
