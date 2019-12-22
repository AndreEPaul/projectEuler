//
// Created by Andre on 12/18/2019.
// Goes through products of a range of numbers
// check for palindromes. utilizes helper function checkIfPalindrome.
// makes a vector filled with all such palindromes.

#include <vector>
#include "checkIfPalindrome.h"
using std::vector;

vector <int> generatePalindromes(int low, int high)
{
    int product;
    vector <int> listOfPalindromes;

    // Go through every product x*y where
    // x,y are in [low, high)
    // This double counts products by factor of high-low+1
    // I believe. Could be made more efficient.
    for(int i = low; i <= high; i++)
    {
        for(int j = i; j <= high; j++)
        {
            product = i*j;
            if(checkIfPalindrome(product))
            {
                listOfPalindromes.push_back(product);
            }
        }
    }

    return listOfPalindromes;
}
