//
// Created by Andre on 12/18/2019.
// Takes positive integer n as limit, sums 1 ^ 2 + ... + n ^ 2
// Uses summation formula. Template in order to allow for larger
// integer types.

#ifndef EULERPROJECTSOLUTIONS_SUMOFSQUARES_H
#define EULERPROJECTSOLUTIONS_SUMOFSQUARES_H

template <typename T>
T sumOfSquares(T);

#include "sumOfSquares.cpp"

#endif //EULERPROJECTSOLUTIONS_SUMOFSQUARES_H
