#include <queue>
#include <string>
#include <iostream>
#include "ficha.hpp"
#include "cliente.hpp"
#include "manager.hpp"
using namespace  std;


int main()
{
    queue<string> sq;
    queue<Ficha*> fq;

    Cliente* cliente1 = new Cliente();
    Cliente* cliente2 = new Cliente();
    Ficha* ficha1 = new Ficha();
    Ficha* ficha2 = new Ficha();
    Manager* manager = new Manager();
    
    string servicio;
    fq.push(ficha1);
    fq.push(ficha2);
    manager->qfichas = fq;

    manager->setData(cliente1);
    cout<< "Ingrese servicio de clinete 1: "<< endl;
    getline(cin, servicio);
    
    ficha1->servicios.push(servicio) ;

    manager->setData(cliente2);

    cout<< "Ingrese servicio de clinete 2: "<< endl;
    getline(cin, servicio);

    ficha2->servicios.push(servicio);

    
    ficha1->mostrarFicha(cliente1);
    ficha2->mostrarFicha(cliente2);
    
    



    delete manager;
    delete cliente1;
    delete cliente2;
    delete ficha1;
    delete ficha2;
    
    return 0;

}
