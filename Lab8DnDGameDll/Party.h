#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
#include "DnDClass.h"
#include <stack>
class LAB8DNDGAMEDLL_API Party {
public:
	Party(std::vector<Character> creator);
	std::stack<Character> orderSetter(Party otherParty);
	std::vector<Character> AdventuringParty;
};
