/*
Alexander Promskiy
CSCI 272 (2)
Assignment 3 Part 3
02/17/2026
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Converts string to lowercase.
// Loop through each character and use tolower().
string toLowerString(string sen)
{
    
    for (int i = 0; i < sen.length(); i++)
    {
        sen[i] = tolower(sen[i]);
    }
    return sen;
}

int main()
{
    
    string word1, word2;

    // Ask for two words.
    cout << "First Word: ";
    getline(cin, word1);

    cout << "Second Word: ";
    getline(cin, word2);

    // Make both words lowercase.
    string lower1 = toLowerString(word1);
    string lower2 = toLowerString(word2);

    if (lower1 == lower2)
        cout << "Strings Are Equal (case-insensitive) " << endl;
    else
        cout << "Strings Are Not Equal (case-insensitive) " << endl;

    return 0;
}