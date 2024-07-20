#include "MouseRestrictor.h"
#include <conio.h> // For clrscr() and getch()
#include <iostream>

MouseRestrictor::MouseRestrictor() : status(0) {}

bool MouseRestrictor::initializeMouse()
{
    union REGS in, out;
    in.x.ax = 0;            // Initialize mouse
    int86(0x33, &in, &out); // Interrupt 0x33
    status = out.x.ax;      // Check mouse status
    return (status != 0);
}

void MouseRestrictor::setMouseArea(int x1, int y1, int x2, int y2)
{
    union REGS in, out;
    in.x.ax = 7;            // Set X bounds
    in.x.cx = x1;           // Minimum X
    in.x.dx = x2;           // Maximum X
    int86(0x33, &in, &out); // Interrupt 0x33

    in.x.ax = 8;            // Set Y bounds
    in.x.cx = y1;           // Minimum Y
    in.x.dx = y2;           // Maximum Y
    int86(0x33, &in, &out); // Interrupt 0x33
}

void MouseRestrictor::displayMouse() const
{
    union REGS in, out;
    in.x.ax = 1;            // Show mouse pointer
    int86(0x33, &in, &out); // Interrupt 0x33
}

void MouseRestrictor::drawRectangle(int x1, int y1, int x2, int y2) const
{
    line(x1, y1, x2, y1);
    line(x2, y1, x2, y2);
    line(x2, y2, x1, y2);
    line(x1, y2, x1, y1);
}

void MouseRestrictor::restrictMouseArea(int x1, int y1, int x2, int y2)
{
    if (!initializeMouse())
    {
        std::cout << "Mouse support not available." << std::endl;
        return;
    }

    int gd = DETECT;
    int gm = 0;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    displayMouse();                // Display mouse pointer
    drawRectangle(x1, y1, x2, y2); // Draw the restriction rectangle
    setMouseArea(x1, y1, x2, y2);  // Restrict mouse movement to the rectangle

    getch();      // Wait for user input
    closegraph(); // Close graphics mode
}
