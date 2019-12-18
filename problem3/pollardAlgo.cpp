//
// Created by Andre on 12/18/2019.
// pollard rho algorithm, helper function
// for factorLargeNumber

#include "gcdFunction.h"

unsigned long long pollardAlgo(unsigned long long bigNum)
{
    unsigned long long xFixed,
                    x,
                    cycleSize = 2;
    unsigned long long factor = 1;

    while(factor == 1)
    {
        unsigned long long count = 1;

        while(count <= cycleSize && factor <= 1)
        {
            x = (x*x + 1) % bigNum;
            factor = gcdFunction(x - xFixed, bigNum);
            count++;
        }

        cycleSize *= 2;
        xFixed = x;
    }

    return factor;
}
