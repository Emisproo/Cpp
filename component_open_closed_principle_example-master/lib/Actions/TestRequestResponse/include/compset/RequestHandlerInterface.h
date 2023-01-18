#ifndef REQUESTHANDLERINTERFACE_H
#define REQUESTHANDLERINTERFACE_H

#include <unordered_map>
#include <string>
#include <iostream>

class RequestHandlerInterface
{
    public:
        virtual ~RequestHandlerInterface() {}
    	virtual std::unordered_map<std::string, std::string> getRequestParameters() = 0;
};


#endif // REQUESTHANDLERINTERFACE_H
