#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <ILanguageManager.hpp>
#include <ModuleLoader.hpp>
#include <catch.hpp>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**@todo probar si esto es posible, sino va dentro del test:*/
import languageManagerModule = "../lib/LanguageManagerModule";
 //linea 21 de main
TEST_CASE( "LanguageManager create instance", "[LanguageManager new]" ) 
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
    
    // Act
    bool isILanguageManager = ( dynamic_cast<ILanguageManager*> (lm) != nullptr );

    // Assert
    REQUIRE( isILanguageManager == true );
}
//linea 23 main
TEST_CASE( "Correct translation into default language", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Hola Mundo!" );
}
//linea 28 main
TEST_CASE( "Correct translation into Spanish", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("esAR");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Hola Mundo!" );
}
//linea 30 main
TEST_CASE( "Correct translation into Spanish 2", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("esAR");
    string translation = lm->translate("HELLO_TODO");
        
    // Assert
    REQUIRE( translation == "¡Hola a todos!" );
}
//linea 31 main
TEST_CASE( "Correct translation into Spanish 3", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("esAR");
    string translation = lm->translate("HELLO_NADA");
        
    // Assert
    REQUIRE( translation == "Que onda?" );
}
//linea 34 main
TEST_CASE( "Correct translation into English", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("enUS");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "Hello World!" );
}
//linea 37 main
TEST_CASE( "Correct translation into French", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("frFR");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Salut monde!" );
}
//linea 39 agregué rusRus.lang
TEST_CASE( "Correct translation into Russian", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("rusRus");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Privet, mir!" );
}
//linea 42 main
TEST_CASE( "Correct translation into SpanishSpain", "[LanguageManager getTranslation]" )
{
    // Arrange
    ILanguageManager* lm = languageManagerModule.getInstanceAs<ILanguageManager*>();
 
    // Act
    lm->setLanguage("esES");
    string translation = lm->translate("HELLO_WORLD");
        
    // Assert
    REQUIRE( translation == "¡Hola Mundo plano!" );
}