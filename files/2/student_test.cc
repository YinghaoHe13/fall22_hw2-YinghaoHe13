#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(IndexOfFirstSpace1,test_1)
{
    std::string input = "Hello world";
    int expected = 5;
    int actual = IndexOfFirstSpace(input);
    EXPECT_EQ(expected,actual);
}

TEST(IndexOfFirstSpace2,test_null)
{
    std::string input = "   ";
    int expected = 0;
    int actual = IndexOfFirstSpace(input);
    EXPECT_EQ(expected,actual);
}

TEST(NumberOfVowels1,test_1)
{
    std::string input = "aaa";
    int expected = 3;
    int actual = NumberOfVowels(input);
    EXPECT_EQ(expected,actual);
}

TEST(NumberOfVowels2,test_2)
{
    std::string input = "aBCDEUi";
    int expected = 4;
    int actual = NumberOfVowels(input);
    EXPECT_EQ(expected,actual);
}

TEST(NumberOfConsonants1,test_1)
{
    std::string input = "aaa";
    int expected = 0;
    int actual = NumberOfConsonants(input);
    EXPECT_EQ(expected,actual);
}

TEST(NumberOfConsonants2,test_2)
{
    std::string input = "aBCDEUi";
    int expected = 3;
    int actual = NumberOfConsonants(input);
    EXPECT_EQ(expected,actual);
}

