#include "InterruptHandler.h"
#include <iostream>
#include <windows.h>

void clearScreen()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD dwWritten;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    FillConsoleOutputCharacter(hConsole, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &dwWritten);
    SetConsoleCursorPosition(hConsole, coord);
}

int main()
{
    InterruptHandler handler;

    clearScreen(); // Clear screen (modern method)

    handler.handleInterrupt(); // Simulate handling the interrupt

    std::cout << "The key is: " << handler.getKey() << std::endl;

    system("pause"); // Wait for user input
    return 0;
}
