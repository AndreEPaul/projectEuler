//
// Created by Andre on 12/18/2019.
// Takes positive integer n as limit, sums 1 ^ 2 + ... + n ^ 2
// Uses summation formula. Template in order to allow for larger
// integer types.

template <typename T>
T sumOfSquares(T limit)
{
    return limit * (limit + 1) * (2 * limit + 1) / 6;
}
