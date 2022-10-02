#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(SwapByPointer1,test_1)
{
    float a =10;
    float b =15;
    SwapByPointer(&a,&b);
    EXPECT_EQ(a,15);
    EXPECT_EQ(b,10);
}

TEST(SwapByReference1,test_1)
{
    float a =10;
    float b =15;
    SwapByReference(a,b);
    EXPECT_EQ(a,15);
    EXPECT_EQ(b,10);
}