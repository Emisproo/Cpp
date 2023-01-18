#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int portableSetEnv(const char* name, const char* value, int overwrite)
{
    int result;
    #ifdef __unix__
        result = setenv(name, value, overwrite);
    #elif defined(_WIN32) || defined(WIN32)
        char env[1024];
        strcpy( env, name );
        strcat( env, "=" );
        strcat( env, value );
        /*ToDo: */
        // if(!overwrite) 
        // {
            // size_t envsize = 0;
            // errcode = getenv(envsize, NULL, 0, name);
            // if(errcode || envsize) return errcode;
        // }
        result = putenv(env);
    #endif // defined
    return result;
}