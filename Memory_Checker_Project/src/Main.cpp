#include "MemoryChecker.h"
#include <iostream>

int main()
{
    MemoryChecker checker;
    checker.checkMemorySize();
    checker.displayMemorySize();

    system("pause"); // Wait for user input (optional)
    return 0;
}
