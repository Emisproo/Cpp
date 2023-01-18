#ifndef ACELERATION_H
#define ACELERATION_H

#include "ICommands.h"


class Aceleration: public ICommands {
    
    public: 
        Aceleration ();
        virtual ~Aceleration();
        
        void action(Drone &dron);

}aceleration; //para llamar luego


#endif // ACELERATION_H
