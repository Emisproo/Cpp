#include "..\include\Automatic_Return.h"

AutomaticReturn :: AutomaticReturn(){}
AutomaticReturn :: ~AutomaticReturn(){delete this;}

void AutomaticReturn::action(Drone &dron)
{
    dron.setMode("En casa");
    dron.setPosX(0);
    dron.setPosY(0);
    dron.setPosZ("N");
    dron.setSpeed(0);
    cout << "IBAG 151 ha vuelto automaticamente"<< endl;
}