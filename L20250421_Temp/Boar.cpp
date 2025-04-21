#include "Boar.h"
#include <iostream>

ABoar::ABoar()
{

}
ABoar:: ~ABoar()
{

}

void ABoar::Tick()
{
	std::cout << "Boar Tick" << std::endl;
}


void ABoar::Move()
{
	std::cout << "goblin ¶Ú´Ù!" << std::endl;
}