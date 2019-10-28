// Lab8DnDGameDll.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Lab8DnDGameDll.h"


// This is an example of an exported variable
LAB8DNDGAMEDLL_API int nLab8DnDGameDll=0;

// This is an example of an exported function.
LAB8DNDGAMEDLL_API int fnLab8DnDGameDll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CLab8DnDGameDll::CLab8DnDGameDll()
{
    return;
}
