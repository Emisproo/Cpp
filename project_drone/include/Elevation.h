#ifndef ELEVATION_H
#define ELEVATION_H

#include "ICommands.h"

class Elevation: public ICommands {
  
    public: 
        Elevation ();
        virtual ~Elevation();
        virtual void action(Drone &dron);

}elevation;


#endif // ELEVATION_H