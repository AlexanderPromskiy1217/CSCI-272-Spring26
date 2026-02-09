/*
Alexander Promskiy
CSCI 272 (2)
Assignment 2 Problem 3
*/

#include <iostream>

using namespace std;

template <class T>

T receiptTotal(T amount, T taxPercent, T discountPercent, T tipPercent)
{
    
    // Amount
    T total = amount;

    // Tax
    // += - Adds value to variable and stores
    total += amount * (taxPercent / 100); 

    // Subtract discount
    // -= - Subtracts value to variable and stores
    total -= amount * (discountPercent / 100);

    // Add tip
    total += amount * (tipPercent / 100);

    return total;
}

int main()
{
    
    // Use double for decimal
    
    // receiptTotal(100.0, 8.875, 10.0, 15.0)
    double finalT = receiptTotal(100.0, 8.875, 10.0, 15.0);

    cout << "Final Total: " << finalT << endl;

    return 0;
}