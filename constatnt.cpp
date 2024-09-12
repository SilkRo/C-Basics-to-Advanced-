

// Using the const Keyword 
// const int MAX =100;
// const double PI=3.14149;
// cout<<"The value of PI is "<<PI<<endl;

// Using the constexpr Keyword :
// constexpr int Days_in-week = 7;
// cosntexpr double Gravity = 9.81;
// cout<<"The value of Days in week is "<<Days_in_week<<endl;
// cout<<"The value of Gravity is "<<Gravity<<endl;

// Using #define Preprocessor Directive :
// #define Length 10
// #define PI 3.14159


#include<iostream>
using namespace std;
const int MAX=100;
constexpr double pi=3.14159;
#define Length 10
int main(){
cout<<"Max Value: "<<MAX<<endl;
cout<<"Value of PI :"<<pi<<endl;
cout<<"Length: "<<Length<<endl;
return 0;
}