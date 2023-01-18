#ifndef APPLICATIONINTERFACE_H
#define APPLICATIONINTERFACE_H

#include <iostream>

class ApplicationInterface
{
    public:
    	virtual ~ApplicationInterface(){}
		virtual int run() = 0;
};

#endif // APPLICATIONINTERFACE_H
