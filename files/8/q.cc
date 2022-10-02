#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <set>

// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
void UniqueVectorNotBySet(std::vector<int> &input)
{
    std::vector<int> res;
    for (auto i:input)
    {
        int count = 0;
        for (int j = 0; j < res.size(); j++)
        {
            if (res[j] == i)
            {
                count ++;
            }
        }
        if (count == 0)
        {
            res.push_back(i);
        }
    }
    input = res;
}

void UniqueVectorBySet(std::vector<int> &input)
{
    std::set<int> temp(input.begin(), input.end());
    std::vector<int> res(temp.begin(), temp.end());
    input = res;
}

std::vector<int> IntersectVectors(std::vector<int> &input1,std::vector<int> &input2)
{
    std::vector<int> res;
    std::set<int> temp1(input1.begin(), input1.end());
    std::set<int> temp2(input2.begin(), input2.end());
    std::vector<int> set1(temp1.begin(), temp1.end());
    std::vector<int> set2(temp2.begin(), temp2.end());   

    for (auto i:set1)
    {
        for (auto j:set2)
        {
            if (i == j)
            {
                res.push_back(i);
            }
        }
    }
    return res;
}