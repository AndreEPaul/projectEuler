cmake_minimum_required(VERSION 3.15)
project(eulerProjectSolutions)

set(CMAKE_CXX_STANDARD 14)

add_executable(eulerProjectSolutions
        main.cpp
        problems1_10/problem2/iterativeFib.cpp
        problems1_10/problem2/iterativeFib.hpp
        problems1_10/problem2/fibFunctionProb2.cpp
        problems1_10/problem2/fibFunctionProb2.h
        problems1_10/problem3/factorLargeNumber.cpp
        problems1_10/problem3/factorLargeNumber.h
        problems1_10/problem3/gcdFunction.cpp
        problems1_10/problem3/gcdFunction.h
        problems1_10/problem3/pollardAlgo.cpp
        problems1_10/problem3/pollardAlgo.h
        problems1_10/problem3/maxInVector.cpp
        problems1_10/problem3/maxInVector.h
        problems1_10/problem4/checkIfPalindrome.cpp
        problems1_10/problem4/checkIfPalindrome.h
        problems1_10/problem4/generatePalindromes.cpp
        problems1_10/problem4/generatePalindromes.h
        problems1_10/problem5/lcm.cpp
        problems1_10/problem5/lcm.h
        problems1_10/problem5/multipleLcms.cpp
        problems1_10/problem5/multipleLcms.h
        problems1_10/problem5/gcdFunction.cpp
        problems1_10/problem5/gcdFunction.h
        problems1_10/problem6/sumOfSquares.cpp
        problems1_10/problem6/sumOfSquares.h
        problems1_10/problem6/squareOfSum.cpp
        problems1_10/problem6/squareOfSum.h
        problems1_10/problem7/generateListOfPrimes.cpp
        problems1_10/problem7/generateListOfPrimes.h Euler.h problems1_10/problem1/Problem1.cpp problems1_10/problem1/Problem1.h)