#pragma once

#include <vector>
#include "Actor.h"

class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	std::vector<AActor*> GetActors();
	void SpawnActor(AActor* SpawnedAtor);

	void Run();
	void ClearAllActors();

protected:
	std::vector<AActor*> Actors;
};

