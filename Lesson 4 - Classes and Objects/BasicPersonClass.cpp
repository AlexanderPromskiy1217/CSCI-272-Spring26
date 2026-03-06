/*
Name : Alexander Promskiy
Course : CSCI 272 (2)
Lesson Number : Lesson 4
Code Topic : Basic Person Class
Date : 03/05/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
    
public:
    // Data for object.
    string name{"Maksi"};
    int age{29};
    char gender{'M'};

    // Prints information about person.
    void introduce()
    {
        
        cout << "Hello, I'm " << name << ". I'm " << age << " Years Old.";

        // This if, else if, else checks gender and prints its message.
        if (gender == 'M')
        {
            cout << " I'm A Male." << endl;
        }
        
        else if (gender == 'F')
        {
            cout << " I'm A Female." << endl;
        }
        
        else
        {
            cout << " Gender Enspecified." << endl;
        }
    }
};

int main()
{
    // Create object from Person class.
    Person person1;

    // Call introduce function using object.
    person1.introduce();

    return 0;
}

/*
Reflection :
1. What I understood :
   How a class stores data such as name, age, and gender.
   
2. Difficulties :
   With the if, else if, and else statements.

3. Research : 
   I reviewed the Lesson 4 slides.

4. AI Usage :
   I used ChatGPT to explain each line and what it did, especially if, else if and else.

5. What I learned :
   Abject can hold its own data.
*/