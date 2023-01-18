#include "..\include\Forward.h"
Forward :: Forward(){}
Forward ::~Forward(){delete this;}

void Forward ::action(Drone &dron)
{
    if (dron.getSpeed()>=2)
    {
        dron.setPosZ("Marcha adelante");
    }
    else
    {
        cout << "Para adelantar primero acelere"<< endl<< endl;
    }
}