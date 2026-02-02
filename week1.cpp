#include <iostream>
using namespace std;

// Function takes two numbers as parameters
double addition(double num1, double num2) {
    double sum = num1 + num2;  
    return sum;               
}

int main() {
    // Call function and pass values
    double result = addition(10, 20);
    cout << "The sum is: " << result << endl;
    return 0;
}

/*
double num1, num2;

num1 = 10;
num2 = 20;

double sum = num1 + num2;
double subtraction = num2 - num1;
<< sum << endl;
cout << "The subtraction is: " << subtraction << endl;
*/