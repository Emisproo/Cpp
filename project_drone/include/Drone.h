#ifndef DRONE_H
#define DRONE_H
#include <iostream>
using namespace std;

#include "Package.h"
#include "Camara.h"

class Drone {
    private: 
        string _Mode;
        int _PosX = 0;
        float _PosY = 0.00;
        string _PosZ = "N";
        int _Speed = 0;
        Package _package;
        Camara _camara;
    public: 
        Drone();
        virtual ~Drone();
        
        string getMode();
        void setMode(string m);

        int getPosX();
        void setPosX (int x);
        
        float getPosY();
        void setPosY(float y);
        
        string getPosZ();
        void setPosZ (string z);
        
        int getSpeed();
        void setSpeed(int sp);

        //virtual void action(ICommands* command);
        void packageStatus(Package &package);
        void chargePackage();
        void deliverPackage();
        void notify();
}dron;


#endif // DRONE_H
