#include "..\include\Takeoff.h"
Takeoff ::Takeoff(){}
Takeoff :: ~Takeoff(){delete this;}

float Takeoff ::getHight()
{
    return _Hight;
}
void Takeoff ::setHight(int h)
{
    _Hight=h;
}
void Takeoff::action(Drone &dron)
{
    dron.setPosY(dron.getPosY()+2.5);
}