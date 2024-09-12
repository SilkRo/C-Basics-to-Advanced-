// switch statement is a control flow that allows you to execute different blocks of code based on the value of an expression 
// Syntax: 
// switch (expression) {
//     case constant1:
//         // Code to execute if expression == constant1
//         break;
//     case constant2:
//         // Code to execute if expression == constant2
//         break;
//     // You can have any number of case statements
//     default:
//         // Code to execute if none of the above cases are matched
//         break;
// }


#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number!" << endl;
            break;
    }

    return 0;
}


// Advantage of Switch Statement : 
// 1)Readability : Easier to read and maintain compared to multiple if-else-if statements
// 2)Efficiency : Faster execution compared to multiple if-else-if statements