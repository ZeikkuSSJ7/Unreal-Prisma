// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"

void AEnemyPawn::Hunt()
{
	State = EEnemyState::Default;

	StateChangedEvent.Broadcast(State);
}

void AEnemyPawn::Idle()
{
	
	State = EEnemyState::Default;

	StateChangedEvent.Broadcast(State);
}
