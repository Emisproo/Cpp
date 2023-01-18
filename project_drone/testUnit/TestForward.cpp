#include "..\googletest\googletest\include\gtest\gtest.h"
#include "..\include\ICommands.h"
#include "..\include\Forward.h"

TEST(action, forwardd)
{
    Forward fw;
    Drone tdron;

    fw.action(tdron);

    EXPECT_EQ(tdron.getPosZ(), "Marcha adelante");

}