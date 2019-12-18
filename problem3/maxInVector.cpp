//
// Created by Andre on 12/18/2019.
// finds the maximum value in unsigned long long vector

#include <vector>
using std::vector;

unsigned long long maxInVector(vector <unsigned long long> vectorIn)
{
    unsigned long long maxValue = vectorIn.at(0);

    for(unsigned i = 0; i < vectorIn.size(); i++)
    {
        if(vectorIn.at(i) > maxValue)
        {
            maxValue = vectorIn.at(i);
        }
    }

    return maxValue;
}
