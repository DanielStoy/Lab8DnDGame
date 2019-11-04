#include "DnDClass.h"
#include "framework.h"
#include <stdlib.h>
#include <time.h>
#include <vector>

Wizard::Wizard() {
	damage = 3;
	armor = 10;
	health = 9;
	inititive = 4;

}

Rogue::Rogue() {
	damage = 10;
	armor = 14;
	health = 10;
	inititive = 3;
}

Fighter::Fighter() {
	damage = 7;
	armor = 16;
	health = 14;
	inititive = 3;
}

Cleric::Cleric() {
	damage = -5;
	armor = 14;
	health = 15;
	inititive = 0;
}

Character::Character(EnumOfClass myClass, EnumOfRace myRace) {
	if (fighter) {
		charClass = new Fighter();
	}
	else if (wizard) {
		charClass = new Wizard();
	}
	else if (rogue) {
		charClass = new Rogue();
	}
	else {
		charClass = new Cleric();
	}

	charRace = new IRace((int)myRace);
	charClass->armor += charRace->armorMod;
	charClass->damage += charRace->damageMod;
	charClass->health += charRace->healthMod;
	charClass->inititive += charRace->initMod;
}

int DnDClasses::RollD20()
{
	srand(time(NULL));
	return rand() % 20 + 1;
}

std::vector<Character> DnDClasses::attack(std::vector<Character> enemies) {
	return enemies;
}

std::vector<Character> Wizard::attack(std::vector<Character> enemies)
{
	if (enemies.size() == 0)
	{
		return enemies;
	}

	int holdRoll;
	for (int i = 0; i < enemies.size(); i++)
	{
		holdRoll = enemies[i].RollD20();
		if (holdRoll >= enemies[i].armor)
		{
			enemies[i].health -= (this->damage);
		}
		if (enemies[i].health < 1)
		{
			enemies.erase(enemies.begin + i);
		}
	}
	return enemies;
}