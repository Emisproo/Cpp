#include "..\include\Reverse.h"

Reverse::Reverse(){}
Reverse::~Reverse(){delete this;}

void Reverse::action(Drone &dron)
{
    if (dron.getSpeed()>=2 && dron.getSpeed()<=20)
    {
        int speed=2;
        dron.setSpeed(speed);
        dron.setPosZ("Reversa");
    }
    else{
        cout << "Debe acelerar para poder poner reversa"<<endl;
    }
}