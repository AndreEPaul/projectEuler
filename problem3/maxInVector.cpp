//
// Created by Andre on 12/18/2019.
// finds the maximum value in type vector

#include <vector>
using std::vector;

template <typename T>
T maxInVector(vector <T> vectorIn)
{
    T maxValue = vectorIn.at(0);

    for(unsigned i = 0; i < vectorIn.size(); i++)
    {
        if(vectorIn.at(i) > maxValue)
        {
            maxValue = vectorIn.at(i);
        }
    }

    return maxValue;
}
