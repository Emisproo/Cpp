#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Package.h"

TEST(packag, status)
{
    Package tpackage;
    EXPECT_EQ(tpackage.getPackageStatus(), "Sin Paquete");
}