#ifndef RESPONSEHANDLERINTERFACE_H
#define RESPONSEHANDLERINTERFACE_H

#include <vector>
#include <unordered_map>
#include <string>
#include <iostream>

typedef std::vector< std::unordered_map<std::string, std::string> > DataType; 

class ResponseHandlerInterface
{
    public:
        virtual ~ResponseHandlerInterface() {}
        virtual void setFormat(std::string format) = 0;
    	virtual void respond(DataType response) = 0;
};

#endif // RESPONSEHANDLERINTERFACE_H
