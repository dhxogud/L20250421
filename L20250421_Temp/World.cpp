#include "World.h"
#include <conio.h>


UWorld::UWorld()
{

}
UWorld::~UWorld()
{

}

std::vector<AActor*> UWorld::GetActors()
{
	return Actors;
}

void UWorld::SpawnActor(AActor* SpawnedAtor)
{
	Actors.push_back(SpawnedAtor);
}

void UWorld::Run()
{
	while (true)
	{
		for (auto Actor : Actors)
		{
			Actor->Tick();
		}
		int Key = _getch();
		if (Key == 27)
		{
			break;
		}
	}
}

void UWorld::ClearAllActors()
{
	for (auto Actor : Actors)
	{
		delete Actor;
		Actor = nullptr;
	}
}