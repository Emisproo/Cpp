#ifndef COMPONENTINTERFACE_H
#define COMPONENTINTERFACE_H

#include <string>

class ComponentInterface
{
    public:
        virtual ~ComponentInterface(){}
        
        virtual bool implements(std::string interfaceName) = 0;
        virtual void* getInstance() = 0;
        virtual void release() = 0;
};

#endif // COMPONENTINTERFACE_H
