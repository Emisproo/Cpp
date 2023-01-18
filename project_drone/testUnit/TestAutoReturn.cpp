#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Automatic_Return.h"

TEST(action, automaticreturn)
{
    AutomaticReturn ar;
    Drone tdron;
    string cout_= testing::internal::GetCapturedStdout();

    ar.action(tdron);
    EXPECT_EQ(tdron.getMode(), "En casa");
    EXPECT_EQ(tdron.getPosX(), 0);
    EXPECT_EQ(tdron.getPosY(), 0);
    EXPECT_EQ(tdron.getPosZ(), "N");
    EXPECT_EQ(tdron.getSpeed(), 0);

    EXPECT_EQ( "IBAG 151 ha vuelto automaticamente", cout_);
}
