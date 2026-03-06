/*
Name : Alexander Promskiy
Course : CSCI 272 (2)
Lesson Number : Lesson 4
Code Topic : Basic Car Class
Date : 03/05/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Car
{

private:
    // Private stores information about car and cannot be accessed from main().
    string brand{"Volkswagen"};
    string model{"Polo"};
    int year{2012};

public:
    // Public to show an action of car.
    void startEngine()
    {
        cout << "Start Engine" << endl;
    }

    // Another public to show second action.
    void accelerate()
    {
        cout << "Accelerate Engine" << endl;
    }
};

int main()
{
    // Create object named car1 from Car class.
    Car car1;

    // Call the object's public functions.
    car1.startEngine();
    car1.accelerate();

    return 0;
}

/*
Reflection :
1. What I understood :
   That this class stores car information and also has functions that show what the car can do.

2. Difficulties :
   I was a little confused about the difference between private and public.

3. Research:
   I reviewed the Lesson 4 slides.

4. AI Usage:
   I used ChatGPT to help explain the difference between public and private. 

5. What I learned:
   Learned how to define simple class, create an object, use private and public.
*/