// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	ATank* PossedTank = GetControlledTank();

	if (!PossedTank) {
		UE_LOG(LogTemp, Error, TEXT("No PossedTank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlling: %s"), *(PossedTank->GetName()));
	}
}
ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

