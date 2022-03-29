// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle_Player_Controller.h"

#include "Paddle.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Ball.h"

APaddle_Player_Controller::APaddle_Player_Controller()
{
}


void APaddle_Player_Controller::BeginPlay()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

	SpawnNewBall();
}

void APaddle_Player_Controller::SetupInputComponent()
{
	Super::SetupInputComponent();
	EnableInput(this);
	InputComponent->BindAxis("MoveHorizontal", this, &APaddle_Player_Controller::MoveHorizontal);
	InputComponent->BindAction("Launch", IE_Pressed, this, &APaddle_Player_Controller::Launch);
}


void APaddle_Player_Controller::MoveHorizontal(float AxisValue)
{
	if (myPawn)
		myPawn->MoveHorizontal(AxisValue);
	else 
		myPawn = Cast<APaddle>(GetPawn());
}

void APaddle_Player_Controller::SpawnNewBall()
{
	if (!myBall)
		myBall = nullptr;

	if (ballObj)
	{
		myBall = GetWorld()->SpawnActor<ABall>(ballObj, spawnLocation, FRotator::ZeroRotator, spawnInfo);
	}
}

void APaddle_Player_Controller::Launch()
{
	myBall->Launch();
}
