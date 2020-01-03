//
// Inherits from Euler class.
// Has all functions to calculate Euler problem 1.
//

#ifndef EULERPROJECTSOLUTIONS_PROBLEM1_H
#define EULERPROJECTSOLUTIONS_PROBLEM1_H

#include "C:\Users\Andre\CLionProjects\eulerProjectSolutions\Euler.h"

class Problem1 : public Euler {
private:
    int multiple1;
    int multiple2;
    int limit;
public:
    Problem1();
    Problem1(int, int, int);
    void calculateAnswer() override;
    unsigned long long sumFunction();
    void setMultiple1(int);
    void setMultiple2(int);
    void setLimit(int);
};


#endif //EULERPROJECTSOLUTIONS_PROBLEM1_H
