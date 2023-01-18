#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\Drone.h"
#include "..\include\Package.h"
#include <iostream>

TEST(dron, chargepackage)
{
    Drone tdron;
    Package tpackage;
    tdron.chargePackage();
    EXPECT_EQ(package.getPackageStatus(), "Cargado, en camino");
}
TEST(dron, deliverPackage)
{
    Drone tdron;
    Package tpackage;
    testing::internal::CaptureStdout();
    string cout_= testing::internal::GetCapturedStdout();
    
    tdron.deliverPackage();
    EXPECT_EQ(package.getPackageStatus(), "Entregado");
    EXPECT_EQ("Notificacion de entrega enviada.", cout_);
}
TEST(dron, notify)
{
    Drone tdron;
    testing::internal::CaptureStdout();
    string cout_= testing::internal::GetCapturedStdout();
     EXPECT_EQ("Notificacion de entrega enviada.", cout_);
}
