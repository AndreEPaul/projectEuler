//
// update_1.0: abstract class for Euler problems.
//

#ifndef EULERPROJECTSOLUTIONS_EULER_H
#define EULERPROJECTSOLUTIONS_EULER_H

#include <chrono>
#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Euler {
protected:
    int problemNumber;
    unsigned long long answer;
public:
    virtual void calculateAnswer()=0;
    void reportAnswer()
    {
        cout << "PROBLEM " << this->problemNumber << " ANSWER: ";
        cout << this->answer << endl;
    }
};


#endif //EULERPROJECTSOLUTIONS_EULER_H
