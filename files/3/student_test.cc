#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(Calculate1,test_1)
{
    int a = 1;
    int b = 2;
    Operation add = Operation::kAdd;
    float expected = 3;
    float actual = Calculate(a,b,add);
    EXPECT_EQ(expected,actual);
}

TEST(Calculate2,test_2)
{
    int a = 1;
    int b = 2;
    Operation Subtract = Operation::kSubtract;
    float expected = -1;
    float actual = Calculate(a,b,Subtract);
    EXPECT_EQ(expected,actual);
}

TEST(Calculate3,test_3)
{
    int a = 2;
    int b = 2;
    Operation division = Operation::kDivision;
    float expected = 1;
    float actual = Calculate(a,b,division);
    EXPECT_EQ(expected,actual);
}

TEST(Calculate4,test_4)
{
    int a = 2;
    int b = 2;
    Operation mult = Operation::kMultiplication;
    float expected = 4;
    float actual = Calculate(a,b,mult);
    EXPECT_EQ(expected,actual);
}

TEST(Calculate5,test_5)
{
    int a = 2;
    int b = 2;
    Operation bit_and = Operation::kBitwise_AND;
    float expected = 2;
    float actual = Calculate(a,b,bit_and);
    EXPECT_EQ(expected,actual);
}

TEST(Calculate6,test_6)
{
    int a = 2;
    int b = 1;
    Operation bit_or = Operation::kBitwise_OR;
    float expected = 3;
    float actual = Calculate(a,b,bit_or);
    EXPECT_EQ(expected,actual);
}

TEST(Calculate7,test_7)
{
    int a = 4;
    int b = 2;
    Operation left = Operation::kShift_left;
    float expected = 16;
    float actual = Calculate(a,b,left);
    EXPECT_EQ(expected,actual);
}

TEST(Calculate8,test_8)
{
    int a = 4;
    int b = 2;
    Operation right = Operation::kShift_right;
    float expected = 1;
    float actual = Calculate(a,b,right);
    EXPECT_EQ(expected,actual);
}