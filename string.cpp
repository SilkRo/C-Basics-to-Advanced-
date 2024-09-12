// String are used to store the Sequence of characters

// 1)C-Style : 
// Strings are arrays of charecters terminated by a null character.
// char str[] = "Hello, World!";

// #include <iostream>
// using namespace std;

// int main() {
//     char str[] = "Hello, World!";
//     cout << str << endl; // Outputs: Hello, World!
//     return 0;
// }



// std::string Class :

// Class Provides a more convenient and powerful way to handel strings in C++.
// Part of Standard Library and Includes many useful function for string manioulation 


#include <iostream>
#include <string> // Include the string library
using namespace std;

int main() {
    string str = "Hello, World!";
    cout << str << endl; // Outputs: Hello, World!

    // String concatenation
    string str2 = " How are you?";
    string result = str + str2;
    cout << result << endl; // Outputs: Hello, World! How are you?

    // String length
    cout << "Length of str: " << str.length() << endl; // Outputs: 13

    // Accessing characters
    cout << "First character: " << str[0] << endl; // Outputs: H

    return 0;
}


// Append(): ".append()" is used for combine two string .
// string firstName="Aditya";
// string lastName="Naikwadi";
// string fullName=firstName.append(lastName);


// Length() OR Size():
// To Calculate the Length of the String 
// string str="Hello";
// cout<<str.length()<<endl; // Outputs: 5

// substring : 
// To get the substring of the string
// string str="Hello";
// string subStr=str.substr(0,3);
// cout<<subStr<<endl; // Outputs: Hel

