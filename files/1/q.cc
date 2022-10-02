#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <algorithm>

// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

int CountCharacters(std::string& input, std::vector<char> characters)
{
    int res = 0;
    int n = input.length();
    if (n<=0)
    {
        return 0;
    }
    transform(input.begin(),input.end(),input.begin(),::tolower);
    for (int i = 0;i < n; i++)
    {
        for (auto j:characters)
        {
            char j_lower = tolower(j);
            if (input[i] == j_lower)
            {
                res ++;
            }
        }
    }
    return res;
}