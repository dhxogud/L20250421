#include "Goblin.h"
#include <iostream>


AGoblin::AGoblin()
{
	//std::cout << "goblin 생성" << std::endl;
};

AGoblin::~AGoblin()
{
	std::cout << "goblin 삭제" << std::endl;
};

void AGoblin::Tick()
{
	std::cout << "Goblin Tick" << std::endl;
}


void AGoblin::Move()
{
	std::cout << "goblin 뛴다!" << std::endl;
}