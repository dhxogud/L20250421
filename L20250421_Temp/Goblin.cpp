#include "Goblin.h"
#include <iostream>


AGoblin::AGoblin()
{
	//std::cout << "goblin ����" << std::endl;
};

AGoblin::~AGoblin()
{
	std::cout << "goblin ����" << std::endl;
};

void AGoblin::Tick()
{
	std::cout << "Goblin Tick" << std::endl;
}


void AGoblin::Move()
{
	std::cout << "goblin �ڴ�!" << std::endl;
}