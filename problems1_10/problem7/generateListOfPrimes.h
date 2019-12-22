//
// Created by Andre on 12/22/2019.
// This function generates primes up to a desired index.
// It returns a vector of templated type (in order to allow for larger
// values, but must be some int type). The index must be above 2 since the
// list starts out with 2 elements as a basis.

#ifndef EULERPROJECTSOLUTIONS_GENERATELISTOFPRIMES_H
#define EULERPROJECTSOLUTIONS_GENERATELISTOFPRIMES_H

#include <vector>
using std::vector;

template <typename T>
vector <T> generateListOfPrimes(int);

#include "generateListOfPrimes.cpp"

#endif //EULERPROJECTSOLUTIONS_GENERATELISTOFPRIMES_H
