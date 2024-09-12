#include<iostream> //Preprocessor Directives 
using namespace std; // Namespace Declaration 
const int MAX=100; // Global Declaration 
int factorial(int n);
int main(){
    int num;
    cout<<"Enter the number: ";
    cin >> num ;
    cout<<"Factorial of "<<num <<"is "<<factorial(num)<<endl;
    return 0;
}