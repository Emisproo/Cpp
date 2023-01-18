#ifndef DOCUMENTGENERATORINTERFACE_H
#define DOCUMENTGENERATORINTERFACE_H

#include <vector>
#include <unordered_map>
#include <string>
#include <iostream>

typedef std::vector< std::unordered_map<std::string, std::string> > DataType; 

class DocumentGeneratorInterface
{
    public:
        virtual ~DocumentGeneratorInterface() {}
    	virtual void setContent(DataType content) = 0;
    	virtual std::string getDocument() = 0;
};


#endif // DOCUMENTGENERATORINTERFACE_H
