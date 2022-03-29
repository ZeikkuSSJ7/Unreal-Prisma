// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanController.h"
#include "PacmanPawn.h"


APacmanPawn* APacmanController::GetPacmanPawn() const
{
	return Cast<APacmanPawn>(GetPawn());
}

void APacmanController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("MoveUp", IE_Pressed, this, &APacmanController::MoveUp);
	InputComponent->BindAction("MoveDown", IE_Pressed, this, &APacmanController::MoveDown);
	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &APacmanController::MoveLeft);
	InputComponent->BindAction("MoveRight", IE_Pressed, this, &APacmanController::MoveRight);
}

void APacmanController::MoveUp()
{
	Move(1);
}

void APacmanController::MoveDown()
{
	Move(2);
}

void APacmanController::MoveLeft()
{
	Move(3);
}

void APacmanController::MoveRight()
{
	Move(4);
}

void APacmanController::Move(int axis)
{
	FVector dir;
	switch (axis)
	{
	case 1:
			dir = FVector::UpVector;
			break;
		case 2:
			dir = FVector::DownVector;
			break;
		case 3:
			dir = FVector::LeftVector;
			break;
		case 4:
			dir = FVector::RightVector;
			break;
		default:
			break;
	}
	if (GetPacmanPawn() != nullptr)
	{
		GetPacmanPawn()->SetDirection(dir);
	}
}
