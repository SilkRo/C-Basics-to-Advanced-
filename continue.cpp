// Is used to skip the rest of the code inside the current iteration of the loop and move to the next iteration. when a continue statement is encountered , the control jumps to the beginning of the next iteration of the loop 

// syntax : continue;

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) {
        if (i == 4) {
            continue; // Skip the rest of the loop when i is 4
        }
        cout << i << " ";
    }
    return 0;
}

// Usage: Used to skip the current Iteration and proceed with the next iteration of the loop 
// Effects:Skips the remaining code inside the loop for the current iteration and jumps to the next iteration 
