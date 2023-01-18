#ifndef ACH1_HPP
#define ACH1_HPP
#include "ficha.hpp"
#include "cliente.hpp"
#include <queue>
#include <string>
#include <iostream>
using namespace  std;


class Manager
{
    public:
        queue<Ficha*> qfichas;
        Manager();
        virtual ~Manager();
        void setData(Cliente* cliente);
        void crearFicha(Ficha* ficha);

 
        
};

Manager :: Manager(){}
Manager :: ~Manager(){}

void Manager::setData(Cliente* cliente)
{
    int  dni;
    string name, vehiculo;
    
    cout<< "ingresar nombre completo: ";
    getline(cin, name);
    
    cout<<"ingresar DNI: ";
    cin>>dni;
    cin.ignore();

    cout<< "ingrese vehiculo: ";
    getline(cin, vehiculo);
    

    cliente->setName(name);
    cliente->setDni(dni);

    cout<< "Cliente creado"<<endl;
}
void Manager::crearFicha(Ficha* ficha)
{
    string servicio;
    qfichas.push(ficha);
    
    cout<< "Ingrese servicio: "<< endl;
    getline(cin, servicio);
    ficha->servicios.push(servicio);

}    






#endif // ACH1_HPP
