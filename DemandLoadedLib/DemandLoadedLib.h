// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DEMANDLOADEDLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DEMANDLOADEDLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DEMANDLOADEDLIB_EXPORTS
#define DEMANDLOADEDLIB_API __declspec(dllexport)
#else
#define DEMANDLOADEDLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DEMANDLOADEDLIB_API CDemandLoadedLib {
public:
	CDemandLoadedLib(void);
	// TODO: add your methods here.
};

extern DEMANDLOADEDLIB_API int nDemandLoadedLib;

DEMANDLOADEDLIB_API int fnDemandLoadedLib(void);
