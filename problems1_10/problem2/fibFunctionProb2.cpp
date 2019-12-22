//
// Created by Andre on 12/17/2019.
// Must utilize the iterative fibonacci function to calculate actual values.
// Then will sum over the even ones in specific range to get result.

#include "iterativeFib.hpp"

unsigned long long fibFunctionProb2(const unsigned long long limit)
{
    unsigned long long currentFib;
    unsigned long long sum = 0;

    for(unsigned long long i = 0; iterativeFib(i) <= limit; i++)
    {
        currentFib = iterativeFib(i);

        if(currentFib % 2 == 0)
        {
            sum += currentFib;
        }
    }

    return sum;
}
