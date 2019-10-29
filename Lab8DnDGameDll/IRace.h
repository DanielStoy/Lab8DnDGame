#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
#include "DnDClass.h"
class LAB8DNDGAMEDLL_API IRace {
public:
	enum EnumOfRace {Elven, Dwarf, Orc, JakobWardga};
	enum EnumOfClass {Fighter, Wizard, Rogue, Cleric};
private:
	int hitMod;
	int armorMod;
	int hitBonusMod;
	int initBonus;
};

class LAB8DNDGAMEDLL_API Character : IRace {
public:
	//This could probably be done better, as of now, the Race picks the class and the race through enums
	//Putting them through an if Statement to give everyone their appropriate class and race
	//Any better ideas let me know
	Character(EnumOfRace myRace, EnumOfClass myClass) {
	};
};
