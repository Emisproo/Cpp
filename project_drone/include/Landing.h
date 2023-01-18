#ifndef LANDING_H
#define LANDING_H

#include "ICommands.h"

class Landing: public ICommands
{
    public:
        Landing();
        virtual ~Landing();

        virtual void action ( Drone &dron);

}landing;
#endif //LANDING_H