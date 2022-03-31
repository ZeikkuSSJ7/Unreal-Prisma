// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterShooter_GameMode.h"

#include "Kismet/GameplayStatics.h"

void AMonsterShooter_GameMode::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(countDownTimerHandle, this, &AMonsterShooter_GameMode::CountdownTimer, 1.0f, true, 1.0f);
}

void AMonsterShooter_GameMode::RestartGameplay(bool won)
{
	if (won)
	{
		ResetLevel();
	}
	else
	{
		FTimerHandle timerHandle;
		GetWorldTimerManager().SetTimer(timerHandle, this, &AMonsterShooter_GameMode::ResetLevel, 3.0f);
	}
}

void AMonsterShooter_GameMode::ResetLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), "Gameplay");
}

void AMonsterShooter_GameMode::CountdownTimer()
{
	timerCount--;

	if (timerCount == 0)
	{
		GetWorldTimerManager().ClearTimer(countDownTimerHandle);
		ResetLevel();
	}
}
