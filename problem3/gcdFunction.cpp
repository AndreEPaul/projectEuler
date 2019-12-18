//
// Created by Andre on 12/18/2019.
// gcd as helper function for factoring.
// returns gcd(a,b)

unsigned long long gcdFunction(unsigned long long a, unsigned long long b)
{
    unsigned long long remainder;

    while(b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}
