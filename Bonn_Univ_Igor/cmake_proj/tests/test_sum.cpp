#include<gtest/gtest.h>
#include"header.h"

TEST(TestSum, OutputTest)
{
    EXPECT_EQ(1,sum(1,1));
}
