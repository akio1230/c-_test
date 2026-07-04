#include "Turn.h"
#include <time.h>
#include <iostream>


void Turn::PlayerAttack()
{
	Param.attack = rand() % 21;
	std::cout << Param.attack << std::endl;
}

void Turn::EnemyAttack()
{
	Param.attack = rand() % 11;
	std::cout << Param.attack << std::endl;
}