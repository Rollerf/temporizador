/*
Libreria para crear temporizadores
*/

#include "Arduino.h"

class Timer
{
protected:
    /* data */
    unsigned long timeInit;
    unsigned long currentTime;
    unsigned long setPoint;
    bool lastState;

public:
    //Constructor
    Timer(unsigned long timeSetPoint);
    //Destructor
    ~Timer();
    //Getters and setters
    unsigned long getCurrentTime();
    unsigned long getSetPoint();
    void setSetPoint(unsigned long timeSetPoint);
};

class TON : public Timer
{
public:
    //Constructor
    TON(unsigned long timeSetPoint) : Timer(timeSetPoint){};
    bool IN(bool on);
};
