#include "Slime.h"
#include <iostream>


ASlime::ASlime()
{

}

ASlime::~ASlime()
{
	std::cout << "Slime ����" << std::endl;
}

void ASlime::Tick()
{
	std::cout << "Slime Tick" << std::endl;
}

void ASlime::Move()
{
	std::cout << "�̲�������" << std::endl;
}