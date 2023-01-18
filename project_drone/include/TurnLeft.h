#ifndef TURNLEFT_H
#define TURNLEFT_H
#include "ICommands.h"

class TurnLeft: public ICommands
{
    private:
        int _IniAngle=0;
    public:
        TurnLeft();
        virtual ~TurnLeft();

        int getAngle();
        void setAngle(int a);

        virtual void action(Drone &dron); 
}turnleft;

#endif //TURNLEFT_H