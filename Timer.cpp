#include "Timer.h"

Timer::Timer(unsigned long setPoint)
{
    this->setPoint = setPoint;
    lastState = 0;
    timeInit = 0;
    actualTime = 0;
}

unsigned long Timer::getActualTime()
{
    return actualTime;
}

bool TON::IN(bool on)
{
    if (on != lastState)
    {
        timeInit = millis();
        lastState = on;
    }
    else
    {
        actualTime = millis() - timeInit;

        if (actualTime >= setPoint)
        {
            return true;
        }
    }

    return false;
}
