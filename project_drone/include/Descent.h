#ifndef DESCENT_H
#define DESCENT_H

#include "ICommands.h"

class Descent: public ICommands {
    
    public: 
        Descent();
        virtual ~Descent();

        virtual void action(Drone &dron);

}descent;


#endif // DESCENT_H
