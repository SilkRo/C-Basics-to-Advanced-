// Is Used when the number of iteration is not known beforehand. it conatinues to execute as long as the condition is true 

// synatax: 
// while (/* condition */)
// {
//     /* code */
// }


// condition : Evaluates before each iteration . If true , the loop body executes 
// Body : Contains the code to be executed repeatedly 
// use Case : Suitable for Scenarious where the number of iteration is not know 

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << "i = " << i << endl;
        ++i;
    }
    return 0;
}
