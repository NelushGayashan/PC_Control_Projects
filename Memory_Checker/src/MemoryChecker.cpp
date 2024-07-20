#include "MemoryChecker.h"
#include <iostream>
#include <conio.h> // For clrscr() and getch()

MemoryChecker::MemoryChecker() : ax(0), bx(0), cx(0), dx(0) {}

void MemoryChecker::checkMemorySize()
{
    clrscr(); // Clear the screen (optional in modern environments)
    invokeInterrupt();
}

void MemoryChecker::invokeInterrupt()
{
    _AH = 0xE8;         // Choose service 0xE8 with _AH
    _AL = 0x01;         // Choose service 0x01 with _AL
    geninterrupt(0x16); // Invoke interrupt 0x16
    ax = _AX;
    bx = _BX;
    cx = _CX;
    dx = _DX;
}

void MemoryChecker::displayMemorySize() const
{
    std::cout << "AX = " << ax << ", BX = " << bx
              << ", CX = " << cx << ", DX = " << dx << std::endl;
}
