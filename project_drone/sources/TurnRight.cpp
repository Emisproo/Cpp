#include "..\include\TurnRight.h"
TurnRight::TurnRight(){}
TurnRight::~TurnRight(){delete this;}

int TurnRight::getAngle()
{
    return _IniAngle;
}

void TurnRight::setAngle(int a)
{
    _IniAngle=a;
}

void TurnRight::action(Drone &dron)
{
    dron.setPosX(dron.getPosX()+10);
    if(dron.getPosX()>=360)
    {
        dron.setPosX(0);
    }
}