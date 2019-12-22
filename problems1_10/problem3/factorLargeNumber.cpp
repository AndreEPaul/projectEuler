//
// Created by Andre on 12/17/2019.
// decent way to factor a relatively large number...
// returns a vector of the factors.
// Implementation of Pollard's rho-algorithm.

#include <vector>
#include "pollardAlgo.h"

using std::vector;

vector <unsigned long long> factorLargeNumber(unsigned long long bigNum)
{
    vector <unsigned long long> listOfFactors;

    // use pollards Algo to attempt to get
    // a non-trivial factor of bigNum.

    unsigned long long factor = 1;

    while(factor != bigNum)
    {
        factor = pollardAlgo(bigNum);

        // Divide to get "new" number to continue factoring.
        bigNum /= factor;
        factor = pollardAlgo(bigNum);

        // Add factor to list.
        listOfFactors.push_back(factor);
    }

    // Will be one factor left over, add this one too.
    listOfFactors.push_back(factor);

    return listOfFactors;
}