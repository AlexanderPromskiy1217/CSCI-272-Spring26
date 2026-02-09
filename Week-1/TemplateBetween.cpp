/*
Alexander Promskiy
CSCI 272 (2)
Assignment 2 Problem 2
*/

#include <iostream>

using namespace std;

template <class T>

bool isBetween(T value, T low, T high)
{
    
    // If value is >= to low AND <= to high
    if (value >= low && value <= high)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    
    // isBetween(7, 1, 10)
    cout << "7 between 1 and 10? "
         << (isBetween(7, 1, 10) ? "true" : "false") << endl;
    
    // isBetween(12, 1, 10)
    cout << "12 between 1 and 10? "
         << (isBetween(12, 1, 10) ? "true" : "false") << endl;
    
    // isBetween('c', 'a', 'f')
    cout << "c between a and f? "
         << (isBetween('c', 'a', 'f') ? "true" : "false") << endl;

    return 0;
}