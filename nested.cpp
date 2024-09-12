// Statement Check Multiple Times 
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    } else if (number < 0) {
        cout << "You entered a negative integer: " << number << endl;
    } else {
        cout << "You entered zero." << endl;
    }

    return 0;
}

// It Checks all the Condition if the Codition is not get Statisfied then it Print the Else Statemnet


