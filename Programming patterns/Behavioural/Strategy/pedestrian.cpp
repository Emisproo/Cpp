#ifndef pedestrian_H
#define pedestrian_H
#include "INavigator.cpp"


class Pedestrian  : public INavigator
{
    public: 
        Pedestrian(){}
        virtual ~Pedestrian(){}
        virtual string calculateDistTime()
        {
            cout << endl;
            return "Calculating distanse and time on foot...";
        }      
         
};

#endif // pedestrian_H