#ifndef AUTOMATIC_RETURN_H
#define AUTOMATIC_RETURN_H
#include "ICommands.h"

class AutomaticReturn: public ICommands
{
    public:
        AutomaticReturn();
        virtual ~AutomaticReturn();

        virtual void action(Drone &dron);
}automaticreturn;

#endif //AUTOMATIC_RETURN
