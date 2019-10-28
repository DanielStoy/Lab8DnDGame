// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LAB8DNDGAMEDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LAB8DNDGAMEDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class LAB8DNDGAMEDLL_API CLab8DnDGameDll {
public:
	CLab8DnDGameDll(void);
	// TODO: add your methods here.
};

extern LAB8DNDGAMEDLL_API int nLab8DnDGameDll;

LAB8DNDGAMEDLL_API int fnLab8DnDGameDll(void);
