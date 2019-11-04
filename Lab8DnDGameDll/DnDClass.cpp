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
	charge = 3;

}

Rogue::Rogue() {
	damage = 10;
	armor = 14;
	health = 10;
	inititive = 3;
	charge = 0;
}

Fighter::Fighter() {
	damage = 7;
	armor = 16;
	health = 14;
	inititive = 3;
	charge = 2;
}

Cleric::Cleric() {
	damage = -5;
	armor = 14;
	health = 15;
	inititive = 0;
	charge = 0;
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

//rogue regular -> deal damage to last enemy in vector
//fighter regular -> deal damage to first enemy in vector
//wizard regular -> deal damage to all enemies
//cleric regular -> heal lowest ally

//rogue special   -> attacks lowest health enemy	     -> dmg = dmg - initiative					--> charge initial: 0		--> charge to use: 4
//fighter special -> buffs dmg		                     -> dmg = dmg + 1/2 armor					--> charge initial: 2		--> charge to use: 2
//wizard special -> attack the highest health enemy	     -> dmg = dmg + initiative					--> charge initial: 3		--> charge to use: 4
//cleric special -> heals whole team					 -> dmg = dmg /2 ... after: dmg = dmg - 2   --> charge initial: 0		--> charge to use: 3

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
			enemies.erase(enemies.begin() + i);
		}
	}
	return enemies;

}

std::vector<Character> Wizard::specialAttack(std::vector<Character> enemies)
{
	
	//checks if there are enemies
	if (enemies.size() == 0)
	{
		return enemies;
	}
	//declare variables
	int locationOfHighest = 0;
	int highestHealth = 0;

	//search for highest health enemy
	for (int i = 0; i < enemies.size(); i++)
	{
		if (enemies[i].health > highestHealth) {
			locationOfHighest = i;
			highestHealth = enemies[i].health;
		}
	}

	//roll that roll
	int holdRoll;
	holdRoll = enemies[locationOfHighest].RollD20();

	//deal that damage if roll is successful
	if (holdRoll >= enemies[locationOfHighest].armor) {
		enemies[locationOfHighest].health -= (this->damage + this->inititive);
	}

	//check if highest health enemy is still alive
	if (enemies[locationOfHighest].health < 1) {
		enemies.erase(enemies.begin() + locationOfHighest);
	}

	//return all the enemies
	return enemies;
}

std::vector<Character> Rogue::attack(std::vector<Character> enemies)
{
	return enemies;
}

std::vector<Character> Rogue::specialAttack(std::vector<Character> enemies)
{
	return enemies;
}

std::vector<Character> Fighter::attack(std::vector<Character> enemies)
{
	return enemies;
}

std::vector<Character> Fighter::specialAttack(std::vector<Character> enemies)
{
	this->damage = this->damage + 4;
	return enemies;
}

std::vector<Character> Cleric::attack(std::vector<Character> enemies)
{
	if (enemies.size() <= 0)
	{
		return enemies;
	}

	int locationOfLowest = 0;
	int lowestHealth = 100;

	//search for highest health enemy
	for (int i = 0; i < enemies.size(); i++)
	{
		if (enemies[i].health < lowestHealth) {
			locationOfLowest = i;
			lowestHealth = enemies[i].health;
		}
	}

	enemies[locationOfLowest].health -= this->damage;

	if (enemies[locationOfLowest].health < 1) {
		enemies.erase(enemies.begin() + locationOfLowest);
	}

	return enemies;
}

std::vector<Character> Cleric::specialAttack(std::vector<Character> enemies)
{
	if (enemies.size() == 0)
	{
		return enemies;
	}

	for (int i = 0; i < enemies.size(); i++)
	{
		enemies[i].health += (this->damage / 2);

		if (enemies[i].health < 1)
		{
			enemies.erase(enemies.begin() + i);
		}
	}

	this->damage = this->damage + 2;

	return enemies;
}
