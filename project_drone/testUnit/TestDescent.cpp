#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Descent.h"

TEST(action, descent)
{
    Descent ds;
    Drone tdron;

    ds.action(tdron);

    EXPECT_EQ(tdron.getPosY(), -0.15);
}