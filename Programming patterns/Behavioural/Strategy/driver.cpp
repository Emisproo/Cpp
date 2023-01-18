#ifndef driver_H
#define driver_H
#include "INavigator.cpp"


class Driver  : public INavigator
{
    public: 
        Driver(){}
        virtual ~Driver(){}
        virtual string calculateDistTime()
        {
            cout << endl;
            return "Calculating distanse and time by car...";
        }      
         
};

#endif // driver_H