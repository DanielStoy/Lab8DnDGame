#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
//Put pure virtual methods up here
class LAB8DNDGAMEDLL_API DnDClasses {
public:
	int damage = 0;
	int armor = 0;
	int health = 0;
	int inititive = 0;

};

class LAB8DNDGAMEDLL_API Wizard : DnDClasses {
public:
	Wizard();
};

class LAB8DNDGAMEDLL_API Rogue : DnDClasses{
public:
	Rogue();
};

class LAB8DNDGAMEDLL_API Fighter : DnDClasses {
public:
	Fighter();

};

class LAB8DNDGAMEDLL_API Cleric : DnDClasses {
public:
	Cleric();
};
