/*=================================================================
	File created by Yohann NICOLAS.

	Commands directly in game.

=================================================================*/
#pragma once

#include "common.h"

extern bool active_Commands;

void savePlayers(Unit* ptChar);
void maxGold(Unit* ptChar);
void putGold(Unit* ptChar, DWORD amount);
void takeGold(Unit* ptChar, DWORD amount);
void updateSharedGold(DWORD goldAmount);

void RefreshGamble(Unit* ptChar);

void Install_Commands();

/*================================= END OF FILE =================================*/