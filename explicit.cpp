#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    // Example of static_cast
    int num = 10;
    double numDouble = static_cast<double>(num); // Converts int to double
    cout << "Static cast: " << numDouble << endl;

    // Example of dynamic_cast
    Animal* animalPtr = new Dog();
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr); // Downcasting
    if (dogPtr) {
        cout << "Dynamic cast successful: ";
        dogPtr->speak(); // Safe to use dogPtr
    } else {
        cout << "Dynamic cast failed" << endl;
    }

    // Example of const_cast
    const int numConst = 20;
    int* numPtr = const_cast<int*>(&numConst); // Removes const qualifier
    *numPtr = 30; // Modifying the value
    cout << "Const cast: " << *numPtr << endl;

    // Example of reinterpret_cast
    int numReinterpret = 100;
    char* charPtr = reinterpret_cast<char*>(&numReinterpret); // Reinterprets int pointer as char pointer
    cout << "Reinterpret cast: " << *charPtr << endl;

    // Clean up
    delete animalPtr;

    return 0;
}
