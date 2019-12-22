//
// Created by Andre on 12/22/2019.
// This function generates primes up to a desired index.
// It returns a vector of templated type (in order to allow for larger
// values, but must be some int type). The index must be above 2 since the
// list starts out with 2 elements as a basis.

#include <vector>
using std::vector;

template <typename T>
vector <T> generateListOfPrimes(T index)
{
    vector <T> basis = {2, 3};

    T counter = 2;
    T numToTest = 5;
    bool numIsPrime;

    while(counter <= index)
    {
        // Reassign flag for every number tested.
        numIsPrime = true;
        for(unsigned i = 0; i < basis.size(); i++)
        {
            // Anytime a basis element is a divisor the number is composite.
            // Also, any composite must have a prime strictly less than it
            // as a factor, so this test is sufficient.
            if(numToTest % basis[i] == 0)
            {
                numIsPrime = false;
            }
        }
        // For prime numbers add them to basis,
        // increase the index counter,
        // else do nothing.
        if(numIsPrime)
        {
            basis.push_back(numToTest);
            counter++;
        }
        // No need to check even numbers.
        numToTest += 2;
    }

    return basis;
}
