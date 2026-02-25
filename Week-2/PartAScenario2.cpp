/*
Alexander Promskiy
CSCI 272 (2)
Assignment 2 Part A Scenario 2
02/24/2026
*/

#include <iostream>
#include <vector>
using namespace std;

// Calculates and returns average of all student IDs in the vector.

double getAverage(const vector<int>& ids)
{
   
    // Variable to store total sum of IDs.
    int sum = 0;  
    // Range-based for loop = go through each ID.
    for (int id : ids)
    {
    // Add each ID to total sum.  
        sum += id;  
    }
    return (double)sum / ids.size();
}

// Finds and returns highest student ID in vector.

int getHighest(const vector<int>& ids)
{
    //Assume first element is highest.
    int highest = ids[0];
    
    // Loop through each ID.
    for (int id : ids)
    {
        
        // If current ID is larger than highest. Update highest.
        if (id > highest)
        {
            highest = id;
        }
    }
    // Return largest value found
    return highest;  
}

int main()
{
    
    // Vector to store student IDs.
    vector<int> studentIDs;

    // 10 student IDs using push_back().
    studentIDs.push_back(1001);
    studentIDs.push_back(1022);
    studentIDs.push_back(1019);
    studentIDs.push_back(1037);
    studentIDs.push_back(1000);
    studentIDs.push_back(1177);
    studentIDs.push_back(1056);
    studentIDs.push_back(1123);
    studentIDs.push_back(1167);
    studentIDs.push_back(1089);

    // Function for average.
    double avg = getAverage(studentIDs);

    // Call function for highest ID.
    int highest = getHighest(studentIDs);

    // Print 
    cout << "Average Student ID : " << avg << endl;
    cout << "Highest Student ID : " << highest << endl;

    return 0;
}

/*
Reflection
1)Big-O shows how a program’s speed changes as the input gets bigger.

2)It’s important because code that works fast with small data can become slow with large data. 
For example, searching through a long list takes more time than searching a short list.

3)A vector is better because it can change size automatically. 
We can easily add or remove items without setting a fixed size.
*/