#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Elevation.h"

TEST(action, elevation)
{
    Elevation ele;
    Drone tdron;

    ele.action(tdron);

    EXPECT_EQ(tdron.getPosY(), +0.15);
}