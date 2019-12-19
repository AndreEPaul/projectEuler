//
// Created by Andre on 12/18/2019.
// this is a boolean function and checks whether
// an integer is a palindrome or not.

#include <stack>
#include <string>
using std::stack;
using std::string;
using std::to_string;

bool checkIfPalindrome(int numberIn)
{
    // First, we convert the number to a string.
    string number = to_string(numberIn);
    string checkNumber;

    // We use a stack of characters for palindrome check.
    stack <char> forPalindrome;

    for(unsigned i = 0; i < number.length(); i++)
    {
        forPalindrome.push(number[i]);
    }
    for(unsigned i = 0; i < number.length(); i++)
    {
        checkNumber += forPalindrome.top();
        forPalindrome.pop();
    }

    if(checkNumber == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}
