#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Aceleration.h"

TEST(action, aceleration)
{
    Aceleration acelerar;
    Drone tdron;
    acelerar.action(tdron);
    EXPECT_EQ(tdron.getSpeed(), +2);
}