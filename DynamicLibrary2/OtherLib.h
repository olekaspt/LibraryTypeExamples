// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the OTHERLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// OTHERLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef OTHERLIB_EXPORTS
#define OTHERLIB_API __declspec(dllexport)
#else
#define OTHERLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class OTHERLIB_API Bar {
public:
	Bar(void);
	// TODO: add your methods here.
};


OTHERLIB_API int someCall(void);
