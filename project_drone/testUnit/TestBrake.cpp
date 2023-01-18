#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Brake.h"

TEST(action, brake)
{
    Brake br; 
    Drone tdron;

    br.action(tdron);

    EXPECT_EQ(tdron.getSpeed(), 0);
    
}