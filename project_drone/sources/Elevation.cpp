#include "..\include\Elevation.h"
Elevation :: Elevation()
{   
}
Elevation ::~Elevation ()
{
    delete this;
}

void Elevation::action(Drone &dron)
/*Elevación max de 50 metros. Cada vez que 
se quiera elevar subira 15cm. Modifica pos Y.*/
{
    
    if (dron.getPosY()<= 50)
    {
        float ascend=0.15; //cm
        dron.setPosY(dron.getPosY()+ ascend);
        cout << dron.getPosY() << " mts de altura"<<endl;

    }
    else{
        cout << "Maximo de altura permitida alcanzado"<< endl;
    }
}