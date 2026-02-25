/*
Alexander Promskiy
CSCI 272 (2)
Assignment 2 Part 3
02/24/2026
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    // Create empty vector of integers.
    vector<int> v;

// size() = how many elements currently stored.
// capacity() = how much memory.
// Capacity is usually larger than size.
    
    cout << "Vector Size and Capacity Growth: \n";

    // Store initial capacity to detect changes.
    int lastCapacity = v.capacity();

    // Add numbers 1 - 50 into  vector
    for (int i = 1; i <= 50; i++)
    {
        
        // Add new element to end of vector.
        v.push_back(i);

// push_back() = vector may need to increase capacity if space runs out.
// Check if capacity changed.
        if ((int)v.capacity() != lastCapacity)
        {
            cout << "After Inserting - " << i
                 << "Size: " << v.size()
                 << ", Capacity: " << v.capacity()
                 << endl;

            // Update lastCapacity.
            lastCapacity = v.capacity();
        }
    }

    // Final results.
    cout << "\nFinal Size : " << v.size() << endl;
    cout << "Final Capacity : " << v.capacity() << endl;

    return 0;
}

/*
Reflection
1) Big-O shows how a program’s speed changes as the input size increases.

2)It’s important because slow code becomes a bigger problem when there is more data.
For example, searching through a long list takes more time than searching a short one.

3)A vector is better because it automatically resizes when it runs out of space.
This makes it easier to use than an array, which has a fixed size.
*/