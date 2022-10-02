#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CountCharacters1,test_1)
{
    std::vector<char> A = {'t','h'};
    std::string input = "This is a test";
    int expected = 4;
    int actual = CountCharacters(input,A);
    EXPECT_EQ(expected,actual);
}

TEST(CountCharacters2,test_2)
{
    std::vector<char> A = {'H','L'};
    std::string input = "Hello world";
    int expected = 4;
    int actual = CountCharacters(input,A);
    EXPECT_EQ(expected,actual);
}

TEST(CountCharacters3,test_3)
{
    std::vector<char> A = {};
    std::string input = "Hello world";
    int expected = 0;
    int actual = CountCharacters(input,A);
    EXPECT_EQ(expected,actual);
}