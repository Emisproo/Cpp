#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\MenuFuns.h"
#include <vector>

TEST ( menu, cargarpackage)
{
    char tcargar;
    cout << " Inserte c para cargar paquete" << endl;
    cin>> tcargar;
    if ( tcargar=='c')
    {
        EXPECT_EQ(package.getPackageStatus(), "Cargado, en camino");
    }
}   

TEST( menu_op, controlesdron)
{
    int op=15;

    ASSERT_TRUE(op>= 0);
    ASSERT_TRUE(op<= 14);
}

TEST(menu_mode, control)
{
    ASSERT_EQ(dron.getMode(),"ON");
}

TEST(menu_op0_landing, controlesdron)
{
    int op = 0;
    EXPECT_EQ(dron.getSpeed(), 2);
    EXPECT_EQ(dron.getPosY(), 0);
}

TEST(menu_op1_brake, controlesdron)
{
    int op = 1;
    EXPECT_EQ(dron.getSpeed(), 0);
}
TEST(menu_op2_reverse, controlesdron)
{
    int op = 2;
    EXPECT_EQ(dron.getSpeed(), 2);
    EXPECT_EQ(dron.getPosZ(), "Reversa");
}
TEST(menu_op3_aceleration, controlesdron)
{
    int op = 3;
    EXPECT_EQ(dron.getSpeed(), +2);
}
TEST(menu_op4_left, controlesdron)
{
    int op = 4;
    EXPECT_EQ(dron.getPosX(), -10);
}
TEST(menu_op5_takeoff, controlesdron)
{
    int op = 5;
    EXPECT_EQ(dron.getPosY(), 2.5);
}
TEST(menu_op6_right, controlesdron)
{
    int op = 6;
    EXPECT_EQ(dron.getPosX(), 10);
}
TEST(menu_op7_descent, controlesdron)
{
    int op = 7;
    EXPECT_EQ(dron.getPosY(), -0.15);
}
TEST(menu_op8_forward, controlesdron)
{
    int op = 8;
    EXPECT_EQ(dron.getPosZ(), "Marcha adelante");
}
TEST(menu_op9_elevation, controlesdron)
{
    int op = 9;
    EXPECT_EQ(dron.getPosY(), +0.15);
}
TEST(menu_op10_deliver, controlesdron)
{
    int op = 10;
    EXPECT_EQ(package.getPackageStatus(), "Paquete entregado");
}
TEST(menu_op11_shoot, controlesdron)
{
    int op = 11;
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
TEST(menu_op12_autoreturn, controlesdron)
{
    int op = 12;
    string cout_= testing::internal::GetCapturedStdout();

    EXPECT_EQ(dron.getMode(), "En casa");
    EXPECT_EQ(dron.getPosX(), 0);
    EXPECT_EQ(dron.getPosY(), 0);
    EXPECT_EQ(dron.getPosZ(), "N");
    EXPECT_EQ(dron.getSpeed(), 0);

    EXPECT_EQ( "IBAG 151 ha vuelto automaticamente", cout_);
}
TEST(menu_op13_showphotos, controlesdron)
{
    int op = 13;
    Camara tcamara;
    tcamara.shoot("Nueva foto 00");
    tcamara.shoot("Nueva foto 01");

    vector<string> fotos = {"Nueva foto 00", "Nueva foto 01"};
     for (int i = 0; i < tcamara.showPhotos().size();++i) //viene bien cuando se necesita la posicion del elemento
       {
           ASSERT_TRUE(tcamara.showPhotos()[i]==fotos[i]);
       };

}
TEST(menu_op14_exit, controlesdron)
{
    int op = 14;
    testing::internal::CaptureStdout();
    string cout_=testing::internal::GetCapturedStdout();
    EXPECT_EQ("Hasta la proxima", cout_);
}
