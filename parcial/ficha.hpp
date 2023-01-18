#ifndef FICHA_HPP
#define FICHA_HPP

#include <queue>
#include <string>
#include "cliente.hpp"
#include <iostream>
using namespace  std;

class Ficha
{
    private:
      Cliente* _cliente = NULL;  
    public:
        queue<string> servicios;
        Ficha();
        Ficha(Cliente* cliente);
        virtual ~Ficha();

        void mostrarFicha(Cliente* cliente);    
        
};

Ficha :: Ficha(){}
Ficha :: Ficha(Cliente* cliente)
{
    _cliente = cliente;
}

Ficha::~Ficha(){delete _cliente;}

void Ficha::mostrarFicha(Cliente* cliente)
{
    cout<< cliente->getName()<<" "<< cliente->getDni() <<""<< cliente->getvehiculo()<< endl;

    if (!servicios.empty())
    {
        
        while(!servicios.empty())
        {
            cout<< '\t' <<servicios.front();
            servicios.pop();
        }
        cout << '\n';
    } else{ cout <<"Nothing yet!"<<endl;}
}





#endif // FICHA_HPP
