#include "MouseController.h"
#include <conio.h> // For clrscr() and getch()
#include <iostream>

MouseController::MouseController() : status(0) {}

bool MouseController::initializeMouse()
{
    union REGS in, out;
    in.x.ax = 0;            // Initialize mouse
    int86(0x33, &in, &out); // Interrupt 0x33
    status = out.x.ax;      // Check mouse status
    return (status != 0);
}

void MouseController::showMouse()
{
    union REGS in, out;
    in.x.ax = 1;            // Show mouse pointer
    int86(0x33, &in, &out); // Interrupt 0x33
}

void MouseController::setMouseToCenter()
{
    if (!initializeMouse())
    {
        std::cout << "Mouse support not available." << std::endl;
        return;
    }

    int gd = getGraphicsDriver();
    int gm = getGraphicsMode();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    showMouse(); // Display mouse pointer

    getch();      // Wait for user input
    closegraph(); // Close graphics mode
}

int MouseController::getGraphicsDriver() const
{
    return DETECT; // Auto-detect graphics driver
}

int MouseController::getGraphicsMode() const
{
    return 0; // Default graphics mode
}

void MouseController::displayMouse() const
{
    showMouse();
}
