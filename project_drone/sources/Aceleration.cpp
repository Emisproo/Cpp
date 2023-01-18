#include "../include/Aceleration.h"

Aceleration :: Aceleration (){}

Aceleration ::~Aceleration (){
    delete this;
}

void Aceleration::action(Drone &dron) 
/*La velocidad maxima es de 20km/h. Cada vez que se acelere o 
desacelere sera de 2km/h. Modifica Speed.*/
{
    if(dron.getSpeed() < 20)
    {
        int speed=2;
        dron.setSpeed(dron.getSpeed()+speed);
        
    }
    else
    {cout<< "Maxima velocidad alcanzada 20 km/h"<< endl<<endl;}
   
   
}