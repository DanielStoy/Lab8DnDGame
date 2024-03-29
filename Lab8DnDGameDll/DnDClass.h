#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
#include <vector>
#include "IRace.h"
#include <ioStream>
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
	int charge = 0;
	int RollD20();
};

class LAB8DNDGAMEDLL_API Character : public DnDClasses { //Queen
public:
	Character();
	Character(EnumOfClass myClass, EnumOfRace myRace, int ID);
	virtual std::vector<Character> attack(std::vector<Character> enemies);
	Character* charClass;
	IRace* charRace;
	int id;
};

//peasants
class LAB8DNDGAMEDLL_API Wizard : public Character {
public:
	std::vector<Character> attack(std::vector<Character> enemies);
	std::vector<Character> specialAttack(std::vector<Character> enemies);
	Wizard();
};

class LAB8DNDGAMEDLL_API Rogue : public Character{
public:
	std::vector<Character> attack(std::vector<Character> enemies);
	std::vector<Character> specialAttack(std::vector<Character> enemies);
	Rogue();
};

class LAB8DNDGAMEDLL_API Fighter : public Character {
public:
	std::vector<Character> attack(std::vector<Character> enemies);
	std::vector<Character> specialAttack(std::vector<Character> enemies);
	Fighter();

};

class LAB8DNDGAMEDLL_API Cleric : public Character {
public:
	std::vector<Character> attack(std::vector<Character> enemies);
	std::vector<Character> specialAttack(std::vector<Character> enemies);
	Cleric();
};