//
// Created by Andre on 12/17/2019.
// This is the implementation for summing function for problem 1 of
// EulerProject. It is more generalized than necessary.
// It takes in three ints. The first two are the multiples we check
// for. The third is the range for 0-number that we are checking in.

unsigned long long sumFunctionProb1(const int num1, const int num2, const int num3)
{
    unsigned long long accumulator = 0;

    for(int i = 1; i < num3; i++)
    {
        if(i % num1 == 0 || i % num2 == 0)
        {
            accumulator += i;
        }
    }

    return accumulator;
}