#ifndef ACTIONINTERFACE_H
#define ACTIONINTERFACE_H

#include <iostream>

class ActionInterface
{
    public:
    	virtual ~ActionInterface(){}
		virtual int execute() = 0;
};


#endif // ACTIONINTERFACE_H
