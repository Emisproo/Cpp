#include "../include/Brake.h"

Brake :: Brake (){}
Brake :: ~Brake (){delete this;}

void Brake :: action(Drone &dron)
/* debe modificar speed a 0*/
{
    if(dron.getSpeed() >=2)
    {
        dron.setSpeed(0);
    }else{
        cout << "No ha acelerado"<<endl<<endl;
    }
}