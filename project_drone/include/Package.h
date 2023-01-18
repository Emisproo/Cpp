#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
using namespace std;


class Package {
    private: 
        string _PackageStatus = "Sin Paquete";
        //bool _packageStatus= false; //no ntregado
    public: 
        Package();
        virtual ~Package();

        string getPackageStatus();
        void setPackageStatus(string package_status);
        
        
        
}package;


#endif // PACKAGE_H
