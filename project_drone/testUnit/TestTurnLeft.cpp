#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\TurnLeft.h"

TEST(action, turnleft)
{
    TurnLeft tl;
    Drone tdron;

    tl.action(tdron);
    EXPECT_EQ(tdron.getPosX(), -10);
}