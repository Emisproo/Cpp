#ifndef TURNRIGHT_H
#define TURNRIGHT_H
#include "ICommands.h"

class TurnRight: public ICommands
{
    private:
        int _IniAngle=0;
    public:
        TurnRight();
        virtual ~TurnRight();

        int getAngle();
        void setAngle(int a);

        virtual void action(Drone &dron);
}turnright;

#endif //TURNRIGHT_H