#include "MouseRestrictor.h"

int main()
{
    MouseRestrictor mouseRestrictor;
    mouseRestrictor.restrictMouseArea(100, 100, 200, 200); // Restrict mouse pointer to the rectangle
    return 0;
}
