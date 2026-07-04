#include "Turn.h"
#include <time.h>
#include <iostream>


Turn::Turn()
{
	srand((unsigned)time(NULL));

	Turn* pPlayer = new Turn;
	Turn* pSlime = new Turn;
	Turn* pGoblin = new Turn;
}