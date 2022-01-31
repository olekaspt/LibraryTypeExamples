// DynamicLibrary1.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DynamicLibrary1.h"


// This is an example of an exported variable
DYNAMICLIBRARY1_API int nDynamicLibrary1=0;

// This is an example of an exported function.
DYNAMICLIBRARY1_API int fnDynamicLibrary1(void)
{
    return 0;
}


void EnableGodMode()
{
    //Nothing
}

namespace DynamicMathLibrary
{
    double Arithmetic::Add(double a, double b)
    {
        return a + b;
    }

    double Arithmetic::Subtract(double a, double b)
    {
        return a - b;
    }

    double Arithmetic::Multiply(double a, double b)
    {
        return a * b;
    }

    double Arithmetic::Divide(double a, double b)
    {
        return a / b;
    }
}
