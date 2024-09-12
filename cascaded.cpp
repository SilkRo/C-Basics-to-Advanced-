// cascaded if-else statement also knwon as if-else-if ladder in which we check the multiple condition in sequence 

// Syntax: 
// if (condition1) {
//     // Code to execute if condition1 is true
// } else if (condition2) {
//     // Code to execute if condition2 is true
// } else if (condition3) {
//     // Code to execute if condition3 is true
// } else {
//     // Code to execute if none of the above conditions are true
// }


#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}


