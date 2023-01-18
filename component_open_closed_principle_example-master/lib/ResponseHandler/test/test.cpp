#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

#include <compset/ComponentInterface.h>
#include <compset/ComponentFactory.h>
#include <compset/ResponseHandlerInterface.h>

typedef std::vector< std::unordered_map<std::string, std::string> > DataType; 
typedef std::unordered_map<std::string, std::string> DatumType; 


int main()
{
    DataType data;
    DatumType datum;

    datum["last_name"] = "Doe";
    datum["first_name"] = "John";
    data.push_back(datum);

    datum["last_name"] = "Smith";
    datum["first_name"] = "Ana";
    data.push_back(datum);
    
    datum["last_name"] = "Jones";
    datum["first_name"] = "Peter";
    data.push_back(datum);

    ComponentFactory* componentFactoryObject = new ComponentFactory();

    componentFactoryObject->setInterfaceName("ResponseHandlerInterface");
    ComponentInterface* responseHandlerComponent = componentFactoryObject->createFrom("../ResponseHandler");
    ResponseHandlerInterface* responseHandlerObject = ( (ResponseHandlerInterface*) responseHandlerComponent->getInstance() );
    // responseHandlerObject->setFormat("Xml"); 
    responseHandlerObject->respond(data);   
    responseHandlerComponent->release();
    
    delete componentFactoryObject;

    std::cout << "" << std::endl;
    std::cout << "RESULT:" << std::endl;
    std::cout << "\t\tTEST OK!!!!!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    return 0;
}