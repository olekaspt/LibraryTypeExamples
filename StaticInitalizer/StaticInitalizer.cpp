// StaticInitalizer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\OtherLib\OtherLib.h"
#include <windows.h> 
#include <stdio.h> 

typedef int(__cdecl* MYPROC)();

int main()
{
    someCall();
    std::cout << "Hello World!\n";


    HINSTANCE hinstLib;
    MYPROC ProcAdd;
    BOOL fFreeResult, fRunTimeLinkSuccess = FALSE;

    // Get a handle to the DLL module.

    hinstLib = LoadLibrary(TEXT("DemandLoadedLib.dll"));

    // If the handle is valid, try to get the function address.

    if (hinstLib != NULL)
    {
        ProcAdd = (MYPROC)GetProcAddress(hinstLib, "myPuts");

        // If the function address is valid, call the function.

        if (NULL != ProcAdd)
        {
            fRunTimeLinkSuccess = TRUE;
            (ProcAdd)();
        }
        // Free the DLL module.

        fFreeResult = FreeLibrary(hinstLib);
    }

    // If unable to call the DLL function, use an alternative.
    if (!fRunTimeLinkSuccess)
        printf("Message printed from executable\n");

    std::cout << "Goodbye World!\n";

    return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
