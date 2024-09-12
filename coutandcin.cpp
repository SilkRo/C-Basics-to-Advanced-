// cin: character Input 
// Receives data from the standard input. The >> operator extracts the data from the input stream.


// cout : character Output 
// Sends data to the standard output. The << operator inserts the data into the output stream.


#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name; // Reads a string from the keyboard and stores it in name

    cout << "Enter your age: ";
    cin >> age; // Reads an integer from the keyboard and stores it in age

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
