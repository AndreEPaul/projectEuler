cmake_minimum_required(VERSION 3.15)
project(eulerProjectSolutions)

set(CMAKE_CXX_STANDARD 14)

add_executable(eulerProjectSolutions
        main.cpp
        problem1/sumFunctionProb1.cpp
        problem1/sumFunctionProb1.h
        problem2/iterativeFib.cpp
        problem2/iterativeFib.hpp
        problem2/fibFunctionProb2.cpp
        problem2/fibFunctionProb2.h
        problem3/factorLargeNumber.cpp
        problem3/factorLargeNumber.h
        problem3/gcdFunction.cpp
        problem3/gcdFunction.h
        problem3/pollardAlgo.cpp
        problem3/pollardAlgo.h
        problem3/maxInVector.cpp
        problem3/maxInVector.h
        problem4/checkIfPalindrome.cpp
        problem4/checkIfPalindrome.h problem4/generatePalindromes.cpp problem4/generatePalindromes.h)