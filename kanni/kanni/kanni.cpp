#include <iostream>
#include <time.h>
#include "Character.h"
#include "Turn.h"

int main()
{
	srand((unsigned)time(NULL));

	Character* pPlayer = new Character;
	Character* pSlime = new Character;
	Character* pGoblin = new Character;

	Turn trun;
	trun.PlayerAttack();
	trun.EnemyAttack();

}

