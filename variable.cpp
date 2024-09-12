#include<iostream>
using namespace std;
int main(){
    // int x , y;
    // int x=50;//Declaration and Initialization of the variable 
    // int y=60;
   /*Types of variable : 
    1)integer:  short 
                long 
                int 
    2)double : Stores floating-point numbers (number with  decimal) (Ex:19.99)

    3)cahr : Store single Character 

    4)string : store sequence of Charecter (text)
    
    5) bool : Stores boolean values (true or false )

    Scope of Variables :
    Local Variables : Declared inside a function or block and can be accessed within that function or block 
    void myFunction() {
    int localvar=5;
    }

Global Variable : Declared outside of all functions and can be accessed from any part of the program 

int globalVar = 10;
void myFunction(){
cout<<globalVar;
}

Constants : 
A constant is a variable whose value cannot be changed once it is assigned.


      */
int age = 19;
double height=6.57;
char grade='A';
string name="Rahul";
bool isMarried=true;

cout<<"age : "<<age<<endl;
cout<<"height : "<<height<<endl;
cout<<"grade : "<<grade<<endl;
cout<<"name: "<<name<<endl;
cout<<"is Married : "<<isMarried<<endl;


    return 0;
}