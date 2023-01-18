#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Reverse.h"

TEST( action, reverse)
{
    Reverse reversa;
    Drone tdron;

    reversa.action(tdron);

    EXPECT_EQ(tdron.getSpeed(), -2);
    EXPECT_EQ(tdron.getPosZ(), "Reversa");
    
}