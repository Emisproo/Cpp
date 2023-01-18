#ifndef CAMARA_H
#define CAMARA_H
#include <iostream>
using namespace std;
#include <vector>


class Camara {
    private: 
        vector <string> _Photos; // guardar fotos
    
    public: 
        Camara();
        virtual ~Camara();
        void shoot(string name); // _Photos.push_back(name); name es nombre de la foto
        vector <string> showPhotos(); //return _Photos;
        
}camara;


#endif // CAMARA_H
