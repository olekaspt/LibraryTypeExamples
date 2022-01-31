// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DYNAMICLIBRARY1_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DYNAMICLIBRARY1_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DYNAMICLIBRARY1_EXPORTS
#define DYNAMICLIBRARY1_API __declspec(dllexport)
#else
#define DYNAMICLIBRARY1_API __declspec(dllimport)
#endif



extern DYNAMICLIBRARY1_API int nDynamicLibrary1;

DYNAMICLIBRARY1_API int fnDynamicLibrary1(void);


extern void EnableGodMode();


namespace DynamicMathLibrary
{
    class DYNAMICLIBRARY1_API Arithmetic
    {
    public:
        // Returns a + b
        static double Add(double a, double b);

        // Returns a - b
        static double Subtract(double a, double b);

        // Returns a * b
        static double Multiply(double a, double b);

        // Returns a / b
        static double Divide(double a, double b);
    };
}