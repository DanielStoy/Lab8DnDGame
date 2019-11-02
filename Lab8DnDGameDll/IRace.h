#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
#include "DnDClass.h"
class LAB8DNDGAMEDLL_API IRace {
public:
	enum EnumOfRace {Elven = 0, Dwarf = 1, Orc = 2, JakobWardga = 3};
	enum EnumOfClass {fighter = 0, wizard = 1, rogue = 2, cleric = 3};
};

//The character holds and creates the class, allowing for easy disposal.
//It also factors in the race through an enum
//Almost nothing will be done here, but it does make disposal easier
//Attacking and defending, along with special attacks will be done in the class method
class LAB8DNDGAMEDLL_API Character : IRace {
public:
	Character(EnumOfRace myRace, EnumOfClass myClass);

private:
	DnDClasses* charClass;
};
