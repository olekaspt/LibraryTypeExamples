// OtherLib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "OtherLib.h"
#include <iostream>


// This is an example of an exported function.
OTHERLIB_API int someCall(void)
{
    return 0;
}



Bar::Bar()
{
    std::cout << "Bar Constructor called" << std::endl;
}


static Bar myBar;

