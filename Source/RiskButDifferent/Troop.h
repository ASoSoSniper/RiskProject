// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapProvinceNode.h"
#include "Troop.generated.h"

UCLASS()
class RISKBUTDIFFERENT_API ATroop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATroop();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MoveToward();

	AMapProvinceNode* currentNode;
	AMapProvinceNode* targetNode;
};
