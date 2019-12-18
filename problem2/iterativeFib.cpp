/***********************************************
Program Name:   Lab 10
Author:         Andre Paul
Date:           12/6/2019
Description:    Implement file for the iterative Fibonacci 
                function. It was written based off 
                the link provided in the lab description:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
************************************************/

unsigned long long iterativeFib(const unsigned long long &n)
{
    unsigned long long first = 0;
    unsigned long long second = 1;
    unsigned long long result;

    for(unsigned long long counter = 2; counter < n; counter++)
    {
        unsigned long long temp = second;
        second = first + second;
        first = temp;
    }

    if(n == 0)
    {
        result = 0;
    }
    else
    {
        result = first + second;
    }

    return result;
}

