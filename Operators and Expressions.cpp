// 1) Arithematic Operators :
// Arithematic operators are used to perform mathematical operations like addition, subtraction, multiplication, division etc.

// 2)Relational Operator :
// Relational operators are used to compare two values. They are used to check whether a condition is true

// 3)Logical operator:
// These Operators are used to Combine multiple boolean expression 

// 4)Bitwise operators :
// These operators perform bit-level operations 

// 5)Assignment Operators : 
// These operators are used to assign a value to a variable.

// 6)other operator:


#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    if (a > b && b > 0) {
        cout << "Both conditions are true." << endl;
    }

    return 0;
}
