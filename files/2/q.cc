#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
int IndexOfFirstSpace(std::string& input)
{
<<<<<<< HEAD
    int n = sizeof(input);
=======
    int n = input.size();
>>>>>>> 15c965d (change of Q2)
    if (n <= 0)
    {
        return 0;
    }
    for (int i=0; i< n; i++)
    {
        if(input[i] == ' ')
        {
            return i;
            break;
        }
    }
}

void SeparateFirstAndLastNames(std::string& full_name, std::string& first_name,std::string& last_name)
{
<<<<<<< HEAD
    int length = sizeof(full_name);
=======
    int length = full_name.size();
>>>>>>> 15c965d (change of Q2)
    int i = IndexOfFirstSpace(full_name);
    for (int j = 0; j<i; j++)
    {
        first_name.push_back(full_name[j]);
    }
    for (int k = 0; k<length-1;k++)
    {
        last_name.push_back(full_name[k]);
    }
    return;
}

int NumberOfVowels(std::string& input)
{
    int res = 0;
    int n = input.size();
    if (n <= 0)
    {
        return 0;
    }
    for (int i = 0;i < n; i++)
    {
        if (input[i] == 'A' || input[i] == 'a' || input[i] == 'E' || input[i] == 'e' ||input[i] == 'I' || input[i] == 'i' ||input[i] == 'O' || input[i] == 'o' ||input[i] == 'U' || input[i] == 'u')
        {
            res ++;
        }
    }
    return res;
}

int NumberOfConsonants(std::string& input)
{
    int res = input.size();
    int n = input.size();
    if (n <= 0)
    {
        return 0;
    }
    for (int i = 0;i < n; i++)
    {
        if (input[i] == 'A' || input[i] == 'a' || input[i] == 'E' || input[i] == 'e' ||input[i] == 'I' || input[i] == 'i' ||input[i] == 'O' || input[i] == 'o' ||input[i] == 'U' || input[i] == 'u')
        {
            res --;
        }
    }  
    return res; 
}

int Reverse(std::string& input)
{
    std::string s;
    int n = input.size();
    for (int i = 0;i < n;i++)
    {
        s.push_back(input[n-1-i]);
    }
    input = s;
    return 0;
}