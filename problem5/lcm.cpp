//
// Created by Andre on 12/18/2019.
// lowest common multiple calculator
// for two integers a,b
// utilizes helper function gcdFunction(a,b)

#include "gcdFunction.h"

template <typename T>
T lcm(T a, T b)
{
    return (a*b / gcdFunction(a, b));
}