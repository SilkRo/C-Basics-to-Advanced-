// Is similar to the while loop but it guarantees that the Code block is excuted at least once because the  condition is checked after the loop Body 



// syntax:
// do
// {
//     /* code */
// } while (/* condition */);


// Body : Executes at least once before the Condition is Checked 
// Condition : Evaluated after each iteration . if true the loop body executes agaiin 
// use case : Useful when the loop body must execute at least once 

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << "i = " << i << endl;
        ++i;
    } while (i < 5);
    return 0;
}
