#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Landing.h"

TEST(action, landing)
{
    Landing land;
    Drone tdron;

    land.action(tdron);
    EXPECT_EQ(tdron.getSpeed(), 2);
    EXPECT_EQ(tdron.getPosY(), 0);

}