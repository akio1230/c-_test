#include "Character.h"
#include <iostream>
#include <time.h>

Character::Character()
{
	srand((unsigned)time(NULL));

	Character* pPlayer = new Character;
	Character* pSlime = new Character;
	Character* pGoblin = new Character;

	// 各キャラクターのHP
	pPlayer->Param.hp = rand() % 51 + 50;
	pSlime->Param.hp = rand() % 51 + 50;
	pGoblin->Param.hp = rand() % 51 + 50;
}

