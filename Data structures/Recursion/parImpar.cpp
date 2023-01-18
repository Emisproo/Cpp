#include <iostream>
using namespace std;

int entero1(int);
int entero2(int);

int numero; 

int main()
{
    
    cout<< "Ingrese un numero entero: ";
    cin>> numero;
    if (entero1(numero) == 1)
    {
        cout<< "El numero "<<numero<<" es par"<<endl;
    }
    else{
        cout<< "El numero "<<numero<<" es impar"<<endl;
    }

    return 0;
}

int entero1(int numero)
{
    if(numero == 0)
    {
        return 1;
    }
    else
    {
        return entero2(numero - 1);
    }
}
int entero2(int numero)
{
    if(numero == 0)
    {
        return 0;
    }
    else{
        return entero1(numero - 1);
    }
}