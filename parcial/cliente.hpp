#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
using namespace  std;


class Cliente
{
    private:
        string m_name;
        int m_dni;
        string m_vehiculo;
    public:
        Cliente();
        Cliente( string name, int dni, string vehiculo);
        virtual~Cliente();
    
        void setName(string name);
        string getName();
        void setDni(int dni);
        int getDni();
        void setVehiculo(string vehiculo);
        string getvehiculo();

    
};

Cliente :: Cliente(){}
Cliente:: Cliente( string name, int dni, string vehiculo)
{
    m_name = name;
    m_dni = dni;
    m_vehiculo = vehiculo;

}
Cliente :: ~Cliente(){ delete this;}

void Cliente :: setName(string name)
{
    m_name = name;
}
string Cliente :: getName ()
{
    return m_name;
}

void Cliente :: setDni(int dni)
{
    m_dni = dni;
}
int Cliente :: getDni ()
{
    return m_dni;
}

void Cliente :: setVehiculo(string vehiculo)
{
    m_vehiculo = vehiculo;
}
string Cliente :: getvehiculo ()
{
    return m_vehiculo;
}




#endif // CLIENTE_HPP
