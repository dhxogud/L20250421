#include "Slime.h"
#include <iostream>


ASlime::ASlime()
{

}

ASlime::~ASlime()
{
	std::cout << "Slime 삭제" << std::endl;
}

void ASlime::Tick()
{
	std::cout << "Slime Tick" << std::endl;
}

void ASlime::Move()
{
	std::cout << "미끄러진다" << std::endl;
}