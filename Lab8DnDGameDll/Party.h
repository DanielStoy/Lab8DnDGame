#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
#include "DnDClass.h"
class LAB8DNDGAMEDLL_API Party {
public:
	std::vector<Character> AdventuringParty;
};
