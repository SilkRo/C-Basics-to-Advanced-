// Converting the Value from one data type to another 
// There are Two Types of Conversion : 1) Implicit Conversion  2)Explicit Conversion 

// 1)Implicit Conversion :
// Implicit conversion is a type of conversion where the compiler automatically converts the value from one data type to
int num_int = 9;
double num_double = num_int; // Implicit conversion from int to double
//num_int is get converted into the num_double

// 2)explicit Conversion :
// Explicit conversion is a type of conversion where the compiler requires a cast to convert the value from one

double num_double = 9.99;
int num_int = static_cast<int>(num_double); // Explicit conversion from double to int

// C-style Cast : Using the cast notation (type)expression 
// Function-style cast : Using Function notation type (expression)
// C++ Named Casts : Using specific casting operators like static_cast ; dynamic_cast ; const_cast ; reinterpret_cast

// double value num_double is explicitly converted to an integer using static_cast, resulting in num_int

/*static cast : 
Purpose : Using for Compile-time type conversion 
It can convert between related types, such as numeric types or pointers within the same inheritance hierarchy.
Example : 
int num = 10;
double numDouble = static_cast<double>(num); // Converts int to double




dynamic_cast :
purpose :   Used for safe downcasting in polymorphic hierarchies.
It performs a runtime check to ensure the validity of the conversion. If the conversion is not possible, it returns nullptr for pointers or throws a bad_cast exception for references.
Example :
class Animal {
    virtual void speak() {}
};

class Dog : public Animal {
    void speak() override {
        std::cout << "Woof!" << std::endl;
    }
};

Animal* animalPtr = new Dog();
Dog* dogPtr = dynamic_cast<Dog*>(animalPtr); // Downcasting
if (dogPtr) {
    dogPtr->speak(); // Safe to use dogPtr
}





const_cast :
Purpose : Used to add or remove the const qualifier from a variable
 It is the only cast that can remove const or volatile qualifiers.
 Example :
 void print(int* num) {
    std::cout << *num << std::endl;
}

const int num = 10;
print(const_cast<int*>(&num)); // Removes const qualifier




reinterpret_cast:
Purpose : Used for low-level reinterpreting of bit patterns.
 It can cast any pointer type to any other pointer type, even if the types are unrelated. It should be used with caution as it can lead to undefined behavior.

Example : 
int num = 10;
char* charPtr = reinterpret_cast<char*>(&num); // Reinterprets int pointer as char pointer

*/





