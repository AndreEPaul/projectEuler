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

    // First, use pollards Algo to attempt to get
    // a non-trivial factor of bigNum.
    unsigned long long factor = pollardAlgo(bigNum);
    
    if(factor > 1)
    {
        listOfFactors.push_back(factor);
    }
}