// Is used when the number of ietrations is known beforehand . it consists of three parts: Initialization . Condition and Increment/Decrement

// syntax:
// for (size_t i = 0; i < count; i++)
// {
//     /* code */
// }

// Initialization :Initializes the loop control variable 
// Condition : Evaluates Before each Iteration. if true , the loop body executes 
// Increment/Decrement : Updates the loop control variable after each iteration
// Use Case : Ideal for scenarious where the number of iteration is known 

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        cout << "i = " << i << endl;
    }
    return 0;
}
