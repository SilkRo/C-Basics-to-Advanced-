// 1)Primitive Data Type : 
// int=> used for integer 
// int age -50;

// char=> used for character 
// char name = 'A';

// bool=> Used for Boolean Values (true or false)
// bool isValid = true ;

// float => used for single-precision floating point numbers 
// float salary = 5000.50f;


// double => used for double-precision floating-point numbers 
// double salary = 5000.50;

// void => Represents the absense of type . Commonly used in the function that do not return a value 
// void display(){
//     cout<<"Hello,World! " ; 
// }

// wchar_t+> Used for Wide CHaracters 
// wchar_t name = L'A';

// 2) Derived Data Types : 
// Array => Collection of Elements of the same type 
// int marks[5] = {1,2,3,4,5};

// pointer=> Stores the  memory  address of another variable 
// int* ptr;

// reference => An alias for another variable 
// int x=10;
// int& ref = x;

// function=> A Block of Code that perform a specific task 
// int add(int a, int b) {
//     return a + b;
// }



// 3) User-Defined : 
// class => A blueprint for Creating objects

// class MyClass {
// public:
//     int myNumber;
//     void myFunction() {
//         cout << "Hello, World!";
//     }
// };


// structure => Similar to classes but with default public access 
// struct myStruct
// {
//     int myNumber;
//     char myChar ;
// };


// Union=> Allow storing different data types in the same memory location 
// union MyUnion {
//     int myInt;
//     float myFloat;
// };


// Enumneratio => Defines a set of named integer constatnt 
// enum Color{RED , ORANGE , BLUE };


#include <iostream>
using namespace std;

int main() {
    int age = 25;
    char grade = 'A';
    bool isValid = true;
    float temperature = 36.6f;
    double pi = 3.14159;
    wchar_t wideChar = L'A';

    int numbers[5] = {1, 2, 3, 4, 5};
    int* ptr = &age;
    int& ref = age;

    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Valid: " << isValid << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Pi: " << pi << endl;
    cout << "Wide Char: " << wideChar << endl;

    cout << "First number in array: " << numbers[0] << endl;
    cout << "Pointer to age: " << *ptr << endl;
    cout << "Reference to age: " << ref << endl;

    return 0;
}
