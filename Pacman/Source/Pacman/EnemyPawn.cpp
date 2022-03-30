// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"

void AEnemyPawn::Hunt()
{
	State = EEnemyState::Default;

	stateChangedEvent.Broadcast(State);
}

void AEnemyPawn::Idle()
{
	
	State = EEnemyState::Idle;

	stateChangedEvent.Broadcast(State);
}
