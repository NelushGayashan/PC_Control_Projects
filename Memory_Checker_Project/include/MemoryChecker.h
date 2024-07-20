#ifndef MEMORY_CHECKER_H
#define MEMORY_CHECKER_H

#include <dos.h> // For hardware interrupts

class MemoryChecker
{
public:
    MemoryChecker();
    void checkMemorySize();
    void displayMemorySize() const;

private:
    unsigned int ax, bx, cx, dx;
    void invokeInterrupt();
};

#endif // MEMORY_CHECKER_H
