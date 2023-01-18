#include "../include/Package.h"
Package :: Package (){}
Package :: ~Package(){delete this;}

string Package ::getPackageStatus()
{
    return _PackageStatus;
}

void Package :: setPackageStatus(string package_status)
{
    _PackageStatus=package_status;
} 