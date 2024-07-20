#ifndef MOUSE_RESTRICTOR_H
#define MOUSE_RESTRICTOR_H

#include <graphics.h> // For graphics mode and functions

class MouseRestrictor
{
public:
    MouseRestrictor();
    bool initializeMouse();
    void restrictMouseArea(int x1, int y1, int x2, int y2);
    void displayMouse() const;
    void drawRectangle(int x1, int y1, int x2, int y2) const;

private:
    void setMouseArea(int x1, int y1, int x2, int y2);
    int status;
};

#endif // MOUSE_RESTRICTOR_H
