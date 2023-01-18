#include "../include/Camara.h"

Camara ::Camara(){}
Camara ::~Camara(){delete this;}

void Camara ::shoot(string name)
{
    _Photos.push_back(name);
}

vector <string> Camara ::showPhotos()
{
       for (int i = 0; i < _Photos.size();++i) //viene bien cuando se necesita la posicion del elemento
       {
           cout << _Photos[i]<<endl;
       }
       /*for(vector<string> :: iterator it = _Photos.begin(); it != _Photos.end(); ++it)
       {
           cout << *it << endl;
       }*/
       
       /*for(auto it = _Photos.begin(); it != _Photos.end(); ++it)
       {
           cout << *it << endl;
       }
       //cuatro maneras de hacer lo mismo
        
        for( string elemento : _Photos)
        {
            cout << elementos << endl;
        }*/

       return _Photos;
}