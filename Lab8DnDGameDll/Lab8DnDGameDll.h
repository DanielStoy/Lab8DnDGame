#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif

class LAB8DNDGAMEDLL_API CLab8DnDGameDll {
public:
	CLab8DnDGameDll(void);
};

extern LAB8DNDGAMEDLL_API int nLab8DnDGameDll;

LAB8DNDGAMEDLL_API int fnLab8DnDGameDll(void);