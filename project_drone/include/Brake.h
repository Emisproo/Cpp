#ifndef BRAKE_H
#define BRAKE_H

#include "ICommands.h"
class Brake: public ICommands {
    public:
        Brake();
        virtual ~Brake();

        virtual void action(Drone &dron);
}brake;

#endif //BRAKE_H

