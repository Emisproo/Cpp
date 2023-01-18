#ifndef TERMINALQUERY_H
#define TERMINALQUERY_H

#include <compset/LibraryLoader.h>
#include <cstring>

void setTerminalQuery(const char* value)
{
    LibraryLoader* loaderObject = LibraryLoader::getInstance();
    loaderObject->loadLibrary("./lib/PortableEnviromentVariable");
    typedef int (*FUNC_TYPE)(const char*, const char*, int);
    FUNC_TYPE portableSetEnvFunction = ( FUNC_TYPE ) loaderObject->getExternalFunction( "portableSetEnv" );
    portableSetEnvFunction("TERMINAL_QUERY_STRING", value, 0);
    loaderObject->freeLibrary();
}


#endif // TERMINALQUERY_H
