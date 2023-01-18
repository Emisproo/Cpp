#ifndef Navigator_H
#define Navigator_H
#include "INavigator.cpp"


class Navigator  
{
    private:
        INavigator* m_strategy=NULL;
    public: 
        Navigator(INavigator* strategy)
            {
                m_strategy = strategy;
            }
        virtual ~Navigator(){}

        void setStrategy(INavigator* str)
            {
                m_strategy = str;
            }
        string calculateDistTime()
            {
               return m_strategy->calculateDistTime();
            }
             
         
};

#endif // Navigator_H