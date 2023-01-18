#ifndef ICOMMANDS_H
#define ICOMMANDS_H

#include "Drone.h"
#include <iostream>
using namespace std;


class ICommands {
    public: 
        ICommands(){}
        virtual ~ICommands(){}
        virtual void action(Drone& ) = 0;
};


#endif // ICOMMANDS_H