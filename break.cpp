// Is used to terminate the loop or  switch statement immediately . when a break statement is encountered inside a loop, the loop is exited and the control is transferred to the statement immediately following the loop 


// syntax: break;

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) {
        if (i == 4) {
            break; // Exit the loop when i is 4
        }
        cout << i << " ";
    }
    return 0;
}

// usage: Typically used to exit loop prematurely when a certain condition is met 
// Effect : Terminates the loop and transfer control to the statement following the loop 

