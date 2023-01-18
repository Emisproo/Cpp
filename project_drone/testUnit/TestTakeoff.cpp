#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Takeoff.h"

TEST(action, takeoff)
{
    Takeoff to;
    Drone tdron;

    to.action(tdron);

    EXPECT_EQ(tdron.getPosY(), 2.5);
}