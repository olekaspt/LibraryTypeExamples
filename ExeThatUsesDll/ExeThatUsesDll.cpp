// ExeThatUsesDll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../DynamicLibrary1/DynamicLibrary1.h"

int main()
{
    std::cout << "Hello World! I'm a Dynamic Library using Exe.\n";

    double a = 7.4;
    int b = 99;

    std::cout << "a + b = " <<
        DynamicMathLibrary::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b = " <<
        DynamicMathLibrary::Arithmetic::Subtract(a, b) << std::endl;
    std::cout << "a * b = " <<
        DynamicMathLibrary::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a / b = " <<
        DynamicMathLibrary::Arithmetic::Divide(a, b) << std::endl;

    //EnableGodMode();

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
