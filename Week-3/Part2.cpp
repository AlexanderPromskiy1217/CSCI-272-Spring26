/*
Alexander Promskiy
CSCI 272 (2)
Assignment 3 Part 2
02/17/2026
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string sentence, word;

    // Ask to enter sentence.
    cout << "Enter Sentence: ";
    getline(cin, sentence);

    // Ask for a word to search.
    cout << "Enter Word To Search: ";
    getline(cin, word);

    // find() = search for the word.
    int location = sentence.find(word);

    // find() = returns starting index.
    // If does not exist, it returns -1.
    if (location != -1)
    {
        cout << "Word Found At: " << location << endl;
    }
    else
    {
        cout << "Word Not Found" << endl;
    }

    // Extra Credit Addition.
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;

    // Loop through each character in sentence.
    for (int i = 0; i < sentence.length(); i++)
    {
        
        char ch = sentence[i];

        if (ch == ' ')
        {
            // Count spaces.
            spaces++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            // Convert uppercase to lowercase.
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + 32;
            }

            // Check if character is a vowel.
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        
        // Other characters are ignored.
    }

    // Print.
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}