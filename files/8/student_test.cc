#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(UniqueVectorNotBySet1,test_1)
{
    std::vector<int> input = {1,2,2,4};
    std::vector<int> actual = {1,2,4};
    UniqueVectorNotBySet(input);
    EXPECT_EQ(input,actual);
}

TEST(UniqueVectorNotBySet2,test_null)
{
    std::vector<int> input = {};
    std::vector<int> actual = {};
    UniqueVectorNotBySet(input);
    EXPECT_EQ(input,actual);
}

TEST(UniqueVectorBySet1,test_1)
{
    std::vector<int> input = {1,2,2,4};
    std::vector<int> actual = {1,2,4};
    UniqueVectorBySet(input);
    EXPECT_EQ(input,actual);
}

TEST(UniqueVectorBySet2,test_null)
{
    std::vector<int> input = {1,2,2,4};
    std::vector<int> actual = {1,2,4};
    UniqueVectorBySet(input);
    EXPECT_EQ(input,actual);
}

TEST(IntersectVectors1,test_1)
{
    std::vector<int> input1 = {1,2,2,3};
    std::vector<int> input2 = {3,4,4,5};
    std::vector<int> actual = {3};
    std::vector<int> expected = IntersectVectors(input1,input2);
    EXPECT_EQ(expected,actual);
}

TEST(IntersectVectors1,test_null)
{
    std::vector<int> input1 = {1,2,2,3};
    std::vector<int> input2 = {};
    std::vector<int> actual = {};
    std::vector<int> expected = IntersectVectors(input1,input2);
    EXPECT_EQ(expected,actual);
}

TEST(IntersectVectors1,test_3)
{
    std::vector<int> input1 = {1,2,2,3};
    std::vector<int> input2 = {4,5,6};
    std::vector<int> actual = {};
    std::vector<int> expected = IntersectVectors(input1,input2);
    EXPECT_EQ(expected,actual);
}