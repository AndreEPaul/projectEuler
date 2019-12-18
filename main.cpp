/** This is a collection of solutions to ProjectEuler.net problems.
 * It will also test the runtime for each calculation.
 **/

#include <iostream>
#include <chrono>
#include "problem1/sumFunctionProb1.h"
#include "problem2/fibFunctionProb2.h"

using std::cout;
using std::endl;

int main()
{
    /// Surround function calls with timestamps.
    auto time1 = std::chrono::high_resolution_clock::now();

    /// For now, pass literals to the sum function.
    unsigned long long result1 = sumFunctionProb1(3,5,1000);

    auto time2 = std::chrono::high_resolution_clock::now();
    auto durationFunction = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();

    cout << "--------------------------------------\n";
    cout << "PROBLEM 1: The sum of all multiples of 3 and 5 from 0 to 1000 is \n";
    cout << result1 << " and this program took " << durationFunction << " milliseconds\n";
    cout << "to calculate this result. \n";
    cout << "----------------------------------------" << endl;

    /// Reassign times, call new function.
    time1 = std::chrono::high_resolution_clock::now();

    /// For now, pass literals to the fib function.
    unsigned long long result2 = fibFunctionProb2(4000000);

    time2 = std::chrono::high_resolution_clock::now();
    durationFunction = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();

    cout << "----------------------------------------\n";
    cout << "PROBLEM 2: The sum of all even fibonacci numbers up through 4 million is\n";
    cout << result2 << " and this program took " << durationFunction << " milliseconds\n";
    cout << "to calculate this result. \n";
    cout << "----------------------------------------" << endl;

    return 0;
}
