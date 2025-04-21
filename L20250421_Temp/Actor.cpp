#include "Actor.h"
#include <iostream>

AActor::AActor()
{

}

AActor::~AActor()
{

}

void AActor::Tick()
{
	std::cout << "AActor Tick" << std::endl;
}
