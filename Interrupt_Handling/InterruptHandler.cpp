#include "InterruptHandler.h"
#include <dos.h>

void InterruptHandler::handleInterrupt()
{
    _AH = 0x00;         // Choose service 0x0 with _AH
    geninterrupt(0x16); // Invoke interrupt 0x16
    key = _AL;          // Get ASCII code of key from _AL
}

char InterruptHandler::getKey() const
{
    return key;
}
