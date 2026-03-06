/*
Name : Alexander Promskiy
Course : CSCI 272 (2)
Lesson Number : Lesson 4
Code Topic : Car Constructors and Destructor
Date : 03/05/2026
*/

#include <iostream>
#include <string>
using namespace std;

/*
1. Default constructor
2. Parameterized constructor
3. Copy constructor
4. Destructor

Constructors = when objects are created. 
Destructor = when object is destroyed.
*/

class Car
{
    
private:
    string brand{"Volkswagen"};
    string model{"Polo"};
    int year{2012};

public:

    // Default constructor runs when object is created.
    Car()
    {
    }

    // Parameterized constructor runs when values are passed while creating object.
    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }

    // Copy constructor creates new object by copying another object.
    Car(const Car& other)
    {
        brand = other.brand;
        model = other.model;
        year = other.year;
    }

    // Destructor runs automatically when object goes out of scope.
    ~Car()
    {
        cout << "Object Is Destroyed " << endl;
    }

    // To display a simple message.
    void startEngine()
    {
        cout << "Start Engine "
             << "{brand: " << brand << "|model: " << model << "}"
             << endl;
    }
};

int main()
{
    
    // Default constructor.
    Car car1;

    // Parameterized constructor.
    Car car2("Tesla", "X", 2022);

    // Uses copy constructor.
    Car car3(car2);

    // Call member function for each object.
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();

    return 0;
}

/*
Reflection :
1. What I understood :
   Understood that the destructor runs automatically when the object is destroyed. 
   Im honestly still confused.

2. Difficulties :
   I was / am confused about overall constructors and destructors.
   
3. Research :
   I reviewed the Lesson 4 slides and had to search up the different types of constructors.

4. AI Usage :
   I used ChatGPT to simplify the code and explain when each constructor and the destructor run.

5. What I learned :
   I learned how objects can be created in different ways and how the destructor runs when an object goes out of scope.
*/