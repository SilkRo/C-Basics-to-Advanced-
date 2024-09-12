
    // Conditional Expressions
    // Ternary Operator 
    // Short hand way of writting on if -else 
    // condition ? expression1 : expression2;
    // condition : The Expression to be evaluated 4
    // expression1 : The expression to be executed if the condition is true
    // expression2 : The expression to be executed if the condition is false 
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;  // Using the ternary operator

    cout << "The maximum value is " << max << endl;
    return 0;
}


// Nested Ternery Operator :
// Make the code harder to read 
#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 20, c = 15;
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);  // Nested ternary operator

    cout << "The maximum value is " << max << endl;
    return 0;
}
   