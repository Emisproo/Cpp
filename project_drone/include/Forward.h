#ifndef FORWARD_H
#define FORWARD_H
#include "ICommands.h"

class Forward : public ICommands
{
    public:
        Forward();
        virtual ~Forward();

        virtual void action(Drone &dron);
}forwardd;
#endif //FORWARD_H