#include "../include/Descent.h"

Descent :: Descent()
{
    
}
Descent :: ~Descent()
{delete this;}

void Descent::action(Drone &dron) 
/*El descenso tiene una altura minima de 2.5m, por seguridad. 
Si quiere bajar más no se puede, debe aterrizar. Cada vez que 
pulse descender lo hara 15 cm. Modifica pos Y.*/
{

    if (dron.getPosY()>2.5)
    {
        float descent = 0.15; //cm
        dron.setPosY(dron.getPosY() - descent);
        cout << dron.getPosY() << " mts de altura"<<endl;

    }
    else{
        cout << "Minimo de altura permitida alcanzado"<< endl;
    }

    
}