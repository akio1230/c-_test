#include "Character.h"
#include <iostream>
#include <time.h>


Character::Character()
{
	// 各キャラクターのHP
	Param.hp = rand() % 51 + 50;

	std::cout << Param.hp << std::endl;
}

