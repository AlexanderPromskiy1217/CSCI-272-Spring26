/*
Alexander Promskiy
CSCI 272 (2)
Assignment 3 Part 1
02/17/2026
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string fullName;

    // Ask to enter full name.
    // getline() = names may contain spaces.
    cout << "Enter Full Name: ";
    
    getline(cin, fullName);

    // Print full name.
    cout << "\nFull Name: " << fullName << endl;

    // length() = total number of characters in string.
    // Letters, spaces, punctuation.
    cout << "Total Characters: " << fullName.length() << endl;

    // Characters using indexing.
    // [0] = first character.
    // length() - 1 = index of last character.
    if (fullName.length() > 0)
    {
        
        cout << "First Character: " << fullName[0] << endl;
        cout << "Last Character: " << fullName[fullName.length() - 1] << endl;
    }

    // find() = find first space in name.
    // Helps get just the first name.
    int spaceIndex = fullName.find(' ');

    // substr(start, length) = extracts part of string.
    // We extract everything from index 0 to the space.
    string firstName = fullName.substr(0, spaceIndex);

    cout << "First Name: " << firstName << endl;

    // Prefix at the beginning of string.
    fullName = "Mr./Ms. " + fullName;

    // Suffix at the end of string.
    fullName = fullName + "Jr. ";

    // Print new name.
    cout << "New Name: " << fullName << endl;

    return 0;
}