#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif


class LAB8DNDGAMEDLL_API IRace {
public:
	IRace();
	IRace(int race);
	int damageMod = 0;
	int initMod = 0;
	int healthMod = 0;
	int armorMod = 0;
};
