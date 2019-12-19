//
// Created by Andre on 12/18/2019.
// takes a positive integer as a limit,
// squares the sum series.
// Templated to allow larger int types.
// (note: this is simplified using summation formulas.)

template <typename T>
T squareOfSum(T limit)
{
    T sum = limit * (limit + 1) / 2;

    return sum*sum;
}

