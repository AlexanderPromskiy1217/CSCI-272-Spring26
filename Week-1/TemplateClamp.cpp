/*
Alexander Promskiy
CSCI 272 (2)
Assignment 2 Problem 1 
*/

// NOTE : 'Clamp' keeps value inside a range.

#include <iostream>

using namespace std;

template <class T> 

T clampValue(T value, T low, T high)
{
    
    // If the value is smaller, return low
    if (value < low)
        return low;

    // If the value is larger, return high
    if (value > high)
        return high;

    return value;
}

int main()
{

    // int value 120 clamped [0, 100]   
    int intR = clampValue(120, 0, 100);
    cout << "Clamp int: " << intR << endl;

    // double value -3.5 clamped to [0.0, 10.0]  
    double doubleR = clampValue(-3.5, 0.0, 10.0);
    cout << "Clamp double: " << doubleR << endl;

    // char value 'z' clamped to ['a', 'f'] 
    char charR = clampValue('z', 'a', 'f');
    cout << "Clamp char: " << charR << endl;

    return 0;
}