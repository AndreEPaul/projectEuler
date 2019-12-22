//
// Created by Andre on 12/18/2019.
// This takes a vector of typename and calculates the
// lcm of the whole list.
// templated just for int types
// list vector must be at least 3 elements. (or else no point in using).

#include <vector>
#include "lcm.h"
using std::vector;

template <typename T>
T multipleLcms(vector <T> vectorIn)
{
    T finalLcm;
    T tempLcm;

    while(vectorIn.size() > 1)
    {
        // Take lcm of final two elements.
        tempLcm = lcm(vectorIn.back(), vectorIn[vectorIn.size() - 2]);

        // Remove these final two elements.
        vectorIn.pop_back();
        vectorIn.pop_back();

        // Put in this lcm value into the vector.
        vectorIn.push_back(tempLcm);
    }
    // One more for final two elements.
    finalLcm = lcm(vectorIn[0], vectorIn[1]);

    return finalLcm;
}