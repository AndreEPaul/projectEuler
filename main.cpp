/** This is a collection of solutions to ProjectEuler.net problems.
 * It will also test the runtime for each calculation.
 **/

#include <iostream>
#include <chrono>
#include <vector>
#include "problems1_10/problem2/fibFunctionProb2.h"
#include "problems1_10/problem3/factorLargeNumber.h"
#include "problems1_10/problem3/maxInVector.h"
#include "problems1_10/problem4/generatePalindromes.h"
#include "problems1_10/problem5/multipleLcms.h"
#include "problems1_10/problem6/squareOfSum.h"
#include "problems1_10/problem6/sumOfSquares.h"
#include "problems1_10/problem7/generateListOfPrimes.h"

// update 1.0:
#include "problems1_10/problem1/Problem1.h"

using std::cout;
using std::endl;
using std::vector;

int main()
{

    Problem1 prob1;
    prob1.calculateAnswer();
/*
    /// Reassign times, call new function.
    time1 = std::chrono::high_resolution_clock::now();

    /// For now, pass literals to the fib function.
    unsigned long long result2 = fibFunctionProb2(4000000);

    time2 = std::chrono::high_resolution_clock::now();
    durationFunction = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();

    cout << "----------------------------------------\n";
    cout << "PROBLEM 2: The sum of all even fibonacci numbers up through 4 million is\n";
    cout << result2 << " and this program took " << durationFunction << " microseconds\n";
    cout << "to calculate this result. \n";
    cout << "----------------------------------------" << endl;

    /// Reassign times, call new function.
    time1 = std::chrono::high_resolution_clock::now();

    /// For now, pass literals
    vector <unsigned long long> listFactorsProb3 = factorLargeNumber(600851475143);

    /// Must get max from this vector for context of problem3.
    unsigned long long result3 = maxInVector(listFactorsProb3);

    time2 = std::chrono::high_resolution_clock::now();
    durationFunction = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();

    cout << "----------------------------------------\n";
    cout << "PROBLEM 3: The largest prime factor of 600851475143 is\n";
    cout << result3 << " and this program took " << durationFunction << " microseconds\n";
    cout << "to calculate this result. \n";
    cout << "----------------------------------------" << endl;

    /// Reassign times, call new function.
    time1 = std::chrono::high_resolution_clock::now();

    /// Create vector full of product palindromes from 100 to 999
    vector <int> listOfPalindromes = generatePalindromes(100, 999);

    /// Use same maxInVector function to find max here.
    int result4 = maxInVector(listOfPalindromes);

    time2 = std::chrono::high_resolution_clock::now();
    durationFunction = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();

    cout << "----------------------------------------\n";
    cout << "PROBLEM 4: The largest palindrome which is a product of \n";
    cout << "2 three-digit numbers is ";
    cout << result4 << " and this program took " << durationFunction << " microseconds\n";
    cout << "to calculate this result. \n";
    cout << "----------------------------------------" << endl;

    /// Reassign times, call new function.
    time1 = std::chrono::high_resolution_clock::now();

    /// Vector list of 1-20 to find lcm of this list.
    vector <unsigned long long> listProb5;
    for(unsigned long long i = 1; i <= 20; i++)
    {
        listProb5.push_back(i);
    }

    /// Use multipleLcms to calculate lcm of the list.
    unsigned long long result5 = multipleLcms(listProb5);

    time2 = std::chrono::high_resolution_clock::now();
    durationFunction = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();

    cout << "----------------------------------------\n";
    cout << "PROBLEM 5: The least common multiple of 1-20 is \n";
    cout << result5 << " and this program took " << durationFunction << " microseconds\n";
    cout << "to calculate this result. \n";
    cout << "----------------------------------------" << endl;

    /// Reassign times, call new function.
    time1 = std::chrono::high_resolution_clock::now();

    /// Pass integer limit.
    int limit = 100;
    int result6 = squareOfSum(limit) - sumOfSquares(limit);

    time2 = std::chrono::high_resolution_clock::now();
    durationFunction = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();

    cout << "----------------------------------------\n";
    cout << "PROBLEM 6: The difference between the sum of squares \n";
    cout << "and the square of summation up through 100 is \n";
    cout << result6 << " and this program took " << durationFunction << " microseconds\n";
    cout << "to calculate this result. \n";
    cout << "----------------------------------------" << endl;

    /// Reassign times, call new function.
    time1 = std::chrono::high_resolution_clock::now();

    /// Pass integer limit.
    unsigned long long desiredAmountPrimes = 10001;
    vector <unsigned long long> listOfPrimes = generateListOfPrimes(desiredAmountPrimes);
    unsigned long long result7 = listOfPrimes[desiredAmountPrimes - 1];

    time2 = std::chrono::high_resolution_clock::now();
    durationFunction = std::chrono::duration_cast<std::chrono::microseconds>(time2 - time1).count();

    cout << "----------------------------------------\n";
    cout << "PROBLEM 7: The 10,001st prime number is \n";
    cout << result7 << " and this program took " << durationFunction << " microseconds\n";
    cout << "to calculate this result. \n";
    cout << "----------------------------------------" << endl;
*/
    return 0;
}
