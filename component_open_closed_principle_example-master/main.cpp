#include <iostream>
#include <compset/TerminalQuery.h>
#include <compset/ComponentFactory.h>
#include <compset/ComponentInterface.h>
#include <compset/ApplicationInterface.h>

int main(int argc, char* argv[])
{
    if ( 1 < argc ) setTerminalQuery(argv[1]);

    ComponentFactory* componentFactoryObject = new ComponentFactory(); /* puntero al obeto ComponentFactory */
    componentFactoryObject->setInterfaceName("ApplicationInterface"); 
    /* el obj fabrica de componente creado llama a funcion para establecer un nombre de interfaz 
    la cual ya esta hecha, es un .h, que va a ser usada luego*/
    ComponentInterface* applicationComponent = componentFactoryObject->createFrom("./lib/Application");
    /* el obj farbica de componente crea componentes desde ese directorio.*/
    delete componentFactoryObject; /* desturye el objeto crado.*/

    ApplicationInterface* applicationObject = ( (ApplicationInterface*) applicationComponent->getInstance() );
    /* puntero a funcion para obtener una instancia*/
    applicationObject->run(); // corre
    applicationComponent->release(); //se libera 

    return 0;
}