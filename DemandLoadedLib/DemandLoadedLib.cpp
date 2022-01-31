// DemandLoadedLib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DemandLoadedLib.h"
#include <windows.h>
#include <iostream>

// This is an example of an exported variable
DEMANDLOADEDLIB_API int nDemandLoadedLib=0;

// This is an example of an exported function.
DEMANDLOADEDLIB_API int fnDemandLoadedLib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDemandLoadedLib::CDemandLoadedLib()
{
    return;
}




#ifdef __cplusplus    // If used by C++ code, 
extern "C" {          // we need to export the C interface
#endif

    __declspec(dllexport) int __cdecl myPuts()
    {
        std::cout << "Hello World! from demand loaded lib\n";

        return 1;
    }

#ifdef __cplusplus
}
#endif



