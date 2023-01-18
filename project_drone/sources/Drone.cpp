#include "../include/Drone.h"

Drone:: Drone (){}
Drone::~Drone(){delete this;}

string Drone:: getMode () { return _Mode; }
void Drone :: setMode(string m){ _Mode = m; }
int Drone :: getPosX(){ return _PosX; }
void Drone :: setPosX (int x){ _PosX = x; }

float Drone :: getPosY(){ return _PosY; }
void Drone :: setPosY(float y) { _PosY = y;}

string Drone :: getPosZ (){ return _PosZ; }
void Drone :: setPosZ (string z) { _PosZ = z; }

int Drone :: getSpeed (){ return _Speed; }
void Drone :: setSpeed (int sp){ _Speed = sp; }


void Drone ::packageStatus(Package &package)
{
    _package=package;
}

void Drone::chargePackage()
{
    package.setPackageStatus("Cargado, en camino");
    package.getPackageStatus();
}
void Drone :: deliverPackage()
{
    package.setPackageStatus("Entregado");
    package.getPackageStatus();
    notify();
}

void Drone :: notify()
{
    cout<<"Notificacion de entrega enviada."<< endl<< endl;
}

