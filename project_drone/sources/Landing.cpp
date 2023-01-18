#include "..\include\Landing.h"
Landing::Landing(){}
Landing::~Landing(){delete this;}

void Landing ::action (Drone &dron)
{
    dron.setSpeed(2);
    dron.setPosY(0);
}

