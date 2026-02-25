/*
Alexander Promskiy
CSCI 272 (2)
Assignment 2 Part A Scenario 1
02/24/2026
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    // vector<string> called dishes.
    vector<string> dishes;

    // 5 dishes using push_back.
    dishes.push_back("Chicken");
    dishes.push_back("Soup");
    dishes.push_back("Pasta");
    dishes.push_back("Pizza");
    dishes.push_back("Tacos");

    // Add new dish at 2nd position.
    // 2nd position = index 1. Indexing starts at 0.
    dishes.insert(dishes.begin() + 1, "Salad");

    // Remove 4th dish with erase().
    // 4th dish = index 3.
    dishes.erase(dishes.begin() + 3);

    // Print final menu with a range-based for loop.
    cout << "Final Menu : " << endl;
        for (const string& item : dishes) {
        cout << item << endl;
}
    
    return 0;
}

/*
Reflection
1)Big-O is a way to describe how the number of steps in a program increases as the input size increases. 
It focuses on overall growth instead of exact speed.

2)Big-O helps programmers predict how code will behave with large amounts of data. 
For example, checking every name in a long list will take more time than checking a small list.

3)A vector is more flexible because it can change size while the program runs.
Unlike arrays, we don’t have to decide the size ahead of time.
*/