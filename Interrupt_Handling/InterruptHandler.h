#ifndef INTERRUPT_HANDLER_H
#define INTERRUPT_HANDLER_H

class InterruptHandler
{
public:
    void handleInterrupt();
    char getKey() const;

private:
    char key;
};

#endif // INTERRUPT_HANDLER_H
