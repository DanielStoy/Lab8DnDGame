#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
//Put pure virtual methods up here
class LAB8DNDGAMEDLL_API DnDClasses {
public:
	virtual ~DnDClasses() {}
	int damage = 0;
	int armor = 0;
	int health = 0;
	int inititive = 0;

};

class LAB8DNDGAMEDLL_API Wizard : public DnDClasses {
public:
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
