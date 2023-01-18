#ifndef main_H
#define main_H
#include <iostream>
#include "Navigator.cpp"
using namespace std;
#include "Navigator.cpp"
#include "pedestrian.cpp"
#include "driver.cpp"

int main()
{
    INavigator* pedestrian = new Pedestrian();
    INavigator* driver = new Driver();
    
    Navigator* navigator = new Navigator(pedestrian);
    cout << navigator->calculateDistTime()<< endl;
   
    //navigator->setStrategy(driver);
    //cout << navigator->calculateDistTime()<< endl;
    Navigator* nav = new Navigator(driver);
    cout << nav->calculateDistTime()<< endl;

    delete pedestrian;
    delete driver;
    delete navigator;
    delete nav;
    return 0;
}

#endif // main_H