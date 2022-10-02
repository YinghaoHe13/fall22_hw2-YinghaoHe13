#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(Concatenate1_1,test_1)
{
    int size_1 = 2;
    int size_2 = 3;
    int array_1[2] = {1,2};
    int array_2[3] = {2,3,4};
    int expected[5] = {1,2,2,3,4};
    int* actual;
    actual = Concatenate1(array_1,size_1,array_2,size_2);
    EXPECT_EQ(*expected,*actual);
    for (int i = 0; i < size_1 + size_2;i++)
    {
        EXPECT_EQ(*(expected+i),*(actual+i));
    }
}

TEST(Concatenate1_2,test_null)
{
    int size_1 = 0;
    int size_2 = 0;
    int array_1[0] = {};
    int array_2[0] = {};
    int expected[0] = {};
    int* actual;
    actual = Concatenate1(array_1,size_1,array_2,size_2);
}

TEST(Concatenate1_3,test_halfnull)
{
    int size_1 = 0;
    int size_2 = 3;
    int array_1[0] = {};
    int array_2[3] = {2,3,4};
    int expected[3] = {2,3,4};
    int* actual;
    actual = Concatenate1(array_1,size_1,array_2,size_2);
    EXPECT_EQ(*expected,*actual);
    for (int i = 0; i < size_1 + size_2;i++)
    {
        EXPECT_EQ(*(expected+i),*(actual+i));
    }
}

TEST(Concatenate2_1,test_1)
{
    std::vector<int> array_1 = {1,2};
    std::vector<int> array_2 = {2,3,4};
    std::vector<int> expected = {1,2,2,3,4};
    std::vector<int> actual = Concatenate2(array_1,array_2);
    EXPECT_EQ(expected,actual);
}

TEST(Concatenate2_2,test_null)
{
    std::vector<int> array_1 = {};
    std::vector<int> array_2 = {};
    std::vector<int> expected = {};
    std::vector<int> actual = Concatenate2(array_1,array_2);
    EXPECT_EQ(expected,actual);
}

TEST(Concatenate2_3,test_halfnull)
{
    std::vector<int> array_1 = {1,2,3};
    std::vector<int> array_2 = {};
    std::vector<int> expected = {1,2,3};
    std::vector<int> actual = Concatenate2(array_1,array_2);
    EXPECT_EQ(expected,actual);
}