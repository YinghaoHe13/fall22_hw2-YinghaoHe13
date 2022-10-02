#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
int* Concatenate1(int* array_1, int size_1, int* array_2, int size_2)
{
    int size_total = size_1 + size_2;
    if (size_total == 0)
    {
        int *res = nullptr;
        return res;
    }
    int *res = new int[size_total];
    for (int i = 0; i < size_1;i++)
    {
        res[i] = array_1[i];
    }
    for (int j = size_1; j < size_total;j++)
    {
        res[j] = array_2[j-size_1];
    }
    return res; 
}

std::vector<int> Concatenate2(std::vector<int>& vector_1,std::vector<int>& vector_2)
{
    std::vector<int> res;
    for (auto i :vector_1)
    {
        res.push_back(i);
    }
    for (auto j :vector_2)
    {
        res.push_back(j);
    }
    return res;
}