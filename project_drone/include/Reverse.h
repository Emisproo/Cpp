#ifndef REVERSE_H
#define REVERSE_H
#include "ICommands.h"

class Reverse: public ICommands
{
    public:
        Reverse();
        virtual ~Reverse();

        virtual void action(Drone &drone);

}reverse;

#endif //REVERSE_H