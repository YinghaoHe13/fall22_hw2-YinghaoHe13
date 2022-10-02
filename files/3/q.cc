#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

// Given two integers, returns the result of the operation based on the given
// operator.
float Calculate(int a, int b, Operation operation)
{
    switch(operation)
    {
        case Operation::kAdd:
            return a+b;
            break;

        case Operation::kSubtract:
            return a-b;
            break;

        case Operation::kDivision:
            if(b == 0)
            {
                std::cout << "b can't be 0 in division";
            }
            else
            {
                return float(a/b);
            }
            break;

        case Operation::kMultiplication:
            return a*b;
            break;

        case Operation::kBitwise_AND:
            return a&b;
            break;

        case Operation::kBitwise_OR:
            return a|b;
            break;
    
        case Operation::kBitwise_XOR:
            return a^b;
            break; 

        case Operation::kShift_right:
            return a>>b;
            break;

        case Operation::kShift_left:
            return a<<b;
            break;
    }
}