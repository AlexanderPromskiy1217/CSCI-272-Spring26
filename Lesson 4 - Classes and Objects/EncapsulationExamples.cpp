/*
Name : Alexander Promskiy
Course : CSCI 272 (2)
Lesson Number : Lesson 4
Code Topic : Encapsulation Examples
Date : 03/05/2026
*/

#include <iostream>
#include <string>
using namespace std;

/*
Username and password are private.
Cannot be accessed directly outside. 
Public functions are used to work with private data.
*/

class User
{
    
private:
    string username;
    string password;

public:

    // Give starting values.
    User(const string& uname, const string& pwd)
    {
        username = uname;
        password = pwd;
    }

    // Check if login information matches.
    bool login(const string& inputUser, const string& inputPwd) const
    {
        return (inputUser == username) && (inputPwd == password);
    }

    // Changes password.
    void updatePassword(const string& newPwd)
    {
        password = newPwd;
    }
};


class BankAccount
{
    
private:
    double balance{0};

public:

    // Adds money to balance.
    void deposit(double amount)
    {
        balance += amount;
    }

    // Removes money if there is enough balance.
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
    }

    // Display current balance.
    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    User userA("alex", "4321");

    if (userA.login("alex", "4321"))
    {
        cout << "Login Successful " << endl;
    }
    
    else
    {
        cout << "Login Failed " << endl;
    }

    userA.updatePassword("abcd");

    if (userA.login("alex", "abcd"))
    {
        cout << "Password Updated Successfully " << endl;
    }
    
    else
    {
        cout << "Password Update Failed " << endl;
    }

    cout << endl;

    BankAccount accountX;

    accountX.deposit(1000);
    accountX.displayBalance();

    accountX.withdraw(100);
    accountX.displayBalance();

    return 0;
}

/*
Reflection :
1. What I understood :
   Encapsulation means keeping data and the functions data together. 

2. Difficulties :
   At first I struggled with the private variables.
   
3. Research :
   I reviewed the Lesson 4 slides.

4. AI Usage :
   I used ChatGPT for help with the private variables.

5. What I learned :
   Encapsulation improves safety and how data is accessed and changed.
*/