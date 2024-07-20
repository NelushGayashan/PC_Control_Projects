#ifndef MOUSE_CONTROLLER_H
#define MOUSE_CONTROLLER_H

#include <graphics.h> // For graphics mode and functions

class MouseController
{
public:
    MouseController();
    bool initializeMouse();
    void setMouseToCenter();
    void displayMouse() const;

private:
    void showMouse();
    int getGraphicsDriver() const;
    int getGraphicsMode() const;
    int status;
};

#endif // MOUSE_CONTROLLER_H
