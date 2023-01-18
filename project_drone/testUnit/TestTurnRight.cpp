#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\TurnRight.h"

TEST(action, turnright)
{
    TurnRight tr;
    Drone tdron;

    tr.action(tdron);
    EXPECT_EQ(tdron.getPosX(), 10);

}