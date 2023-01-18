#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Camara.h"
#include <vector>

TEST(camara, shoot)
{
    Camara tcamara;
    string tphoto;
    int n = 100; 

   for(int i = 1; i <= n; i++)
    {
        tphoto = "Foto nueva" + to_string(i);
        tcamara.shoot(tphoto);
    }

    EXPECT_TRUE(tcamara.showPhotos()[n-1]== tphoto);

}
TEST(camara, showphotos)
{
    Camara tcamara;
    tcamara.shoot("Nueva foto 00");
    tcamara.shoot("Nueva foto 01");

    vector<string> fotos = {"Nueva foto 00", "Nueva foto 01"};
     for (int i = 0; i < tcamara.showPhotos().size();++i) //viene bien cuando se necesita la posicion del elemento
       {
           ASSERT_TRUE(tcamara.showPhotos()[i]==fotos[i]);
       };
}