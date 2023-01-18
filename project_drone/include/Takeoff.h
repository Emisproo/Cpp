#ifndef TAKEOFF_H
#define TAKEOFF_H
#include "ICommands.h"

class Takeoff: public ICommands
{
    private:
        float _Hight = 2.5;
    public:
        Takeoff();
        virtual ~Takeoff();

        float getHight();
        void setHight(int h);

        virtual void action (Drone &dron);
}takeoff;

#endif // TAKEOFF_H