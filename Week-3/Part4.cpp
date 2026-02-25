/*
Alexander Promskiy
CSCI 272 (2)
Assignment 3 Part 4
02/17/2026
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string numberString;

    // Ask to enter number as string.
    cout << "Enter Number: ";
    getline(cin, numberString);

    // String to integer.
    int intValue = stoi(numberString);

    // String to double.
    double doubleValue = stod(numberString);

    // Multiply values by 2.
    intValue = intValue * 2;
    doubleValue = doubleValue * 2;

    // Print.
    cout << "Integer * 2 = " << intValue << endl;
    cout << "Double * 2 = " << doubleValue << endl;

    return 0;
}