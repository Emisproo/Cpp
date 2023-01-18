#include "..\include\TurnLeft.h"
TurnLeft ::TurnLeft(){}
TurnLeft::~TurnLeft(){delete this;}

int TurnLeft ::getAngle()
{
    return _IniAngle;
}

void TurnLeft::setAngle(int a)
{
    _IniAngle=a;
}

void TurnLeft ::action(Drone &dron)
{
    dron.setPosX(dron.getPosX()-10);
    if(dron.getPosX() <= -360)
    {
        dron.setPosX(0);
    }
}