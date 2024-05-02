#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "calc.h"

TEST(FunctionTests, test_sum)
{
    int expResult = 15;
    int actualResult = Calc::sum(10,5);
    EXPECT_EQ(expResult, actualResult);
}

TEST(FunctionTests, test_multiply)
{
    int expResult = 50;
    int actualResult = Calc::multiply(10,5);
    EXPECT_EQ(expResult, actualResult);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

