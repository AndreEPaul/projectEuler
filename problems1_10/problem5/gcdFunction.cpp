//
// Created by Andre on 12/18/2019.
// gcd as helper function for factoring.
// returns gcd(a,b).
// (note: this is templated but can really only make
// sense for ints, I only templated because sometimes I'll
// use int, sometimes I'll use long long, unsigned, etc.)

template <typename T>
T gcdFunction(T a, T b)
{
    T remainder;

    while(b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}
