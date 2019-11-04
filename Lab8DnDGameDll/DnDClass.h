#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
#include <vector>
#include "IRace.h"
//This is where all of our attacking and defending will occur
//Defend will most likely always do the same thing, so put it up top
//Put pure virtual methods up here
//All of our stats are held up top
class LAB8DNDGAMEDLL_API DnDClasses { //king
public:
	enum EnumOfRace { elven, orc, dwarf, human};
	enum EnumOfClass {wizard, rogue, fighter, cleric};
	virtual ~DnDClasses() {}
	int damage = 0;
	int armor = 0;
	int health = 0;
	int inititive = 0;

};

class LAB8DNDGAMEDLL_API Character : public DnDClasses { //Queen
public:
	Character(EnumOfClass myClass, EnumOfRace myRace);
	DnDClasses* charClass;
	IRace* charRace;

private:
	int RollD20();
};

//peasants
class LAB8DNDGAMEDLL_API Wizard : public DnDClasses {
public:
	void attack(std::vector<Character> enemies) {};
	Wizard();
};

class LAB8DNDGAMEDLL_API Rogue : public DnDClasses{
public:
	Rogue();
};

class LAB8DNDGAMEDLL_API Fighter : public DnDClasses {
public:
	Fighter();

};

class LAB8DNDGAMEDLL_API Cleric : public DnDClasses {
public:
	Cleric();
};
