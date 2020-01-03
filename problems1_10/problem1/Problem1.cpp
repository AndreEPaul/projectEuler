//
// Inherits from Euler class.
// Has all functions to calculate Euler problem 1.
//

#include "Problem1.h"

Problem1::Problem1() : Euler()
{
    this->problemNumber = 1;

    // Defaults to Problem 1 solution.
    this->multiple1 = 3;
    this->multiple2 = 5;
    this->limit = 1000;
}

Problem1::Problem1(int multiple1In, int multiple2In, int limitIn) : Euler()
{
    this->problemNumber = 1;

    this->multiple1 = multiple1In;
    this->multiple2 = multiple2In;
    this->limit = limitIn;
}

void Problem1::calculateAnswer()
{
    // Time the duration of function.
    auto time1 = std::chrono::high_resolution_clock::now();

    this->answer = this->sumFunction();

    auto time2 = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();
    this->reportAnswer();
    cout << "Time elapsed: " << duration << " microseconds." << endl;
}

unsigned long long Problem1::sumFunction()
{
    unsigned long long accumulator = 0;

    for(int i = 1; i < this->limit; i++)
    {
        if(i % this->multiple1 == 0 || i % this->multiple2 == 0)
        {
            accumulator += i;
        }
    }

    return accumulator;
}

void Problem1::setMultiple1(int mult1In)
{
    this->multiple1 = mult1In;
}

void Problem1::setMultiple2(int mult2In)
{
    this->multiple2 = mult2In;
}

void Problem1::setLimit(int limitIn)
{
    this->limit = limitIn;
}