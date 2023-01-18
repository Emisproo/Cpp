#ifndef REQUESTHANDLERINTERFACE_H
#define REQUESTHANDLERINTERFACE_H

#include <unordered_map>
#include <string>
#include <iostream>

typedef std::unordered_map<std::string, std::string> DatumType;

class RequestHandlerInterface
{
    public:
        virtual ~RequestHandlerInterface() {}
    	virtual DatumType getRequestParameters() = 0;
};


#endif // REQUESTHANDLERINTERFACE_H
