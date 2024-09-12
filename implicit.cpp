#include <iostream>
using namespace std;

int main() {
    int num_int = 9; // Integer value
    double num_double = num_int; // Implicit conversion from int to double

    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    double num_double2 = 9.99;
    int num_int2 = num_double2; // Implicit conversion from double to int (truncates decimal part)

    cout << "num_double2 = " << num_double2 << endl;
    cout << "num_int2 = " << num_int2 << endl;

    return 0;
}
