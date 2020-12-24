#include "Timer.h"

Timer::Timer(unsigned long setPoint)
{
    this->setPoint = setPoint;
    lastState = 0;
    timeInit = 0;
    currentTime = 0;
}

unsigned long Timer::getCurrentTime()
{
    return currentTime;
}

unsigned long Timer::getSetPoint()
{
    return setPoint;
}

void Timer::setSetPoint(unsigned long setPoint)
{
    this->setPoint = setPoint;
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
        currentTime = millis() - timeInit;

        if (currentTime >= setPoint)
        {
            return true;
        }
    }

    return false;
}
