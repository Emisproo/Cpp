#ifndef COMPONENT_INTERFACE_H
#define COMPONENT_INTERFACE_H

#include <string>

class ComponentInterface
{
    public:
        virtual ~ComponentInterface(){}
        
        virtual bool implements(std::string interfaceName) = 0;
        virtual void* getInstance() = 0;
        virtual void release() = 0;
};

#endif // COMPONENT_INTERFACE_H
