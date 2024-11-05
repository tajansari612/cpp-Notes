#include<iostream>
using namespace std;


// Method overriding in C++ occurs when a derived class provides a specific 
// implementation of a function that is already defined in its base class. 
// The overriding function in the derived class should have the same name, 
// return type, and parameters as the function in the base class.

// Key Points of Method Overriding:
// Inheritance: Method overriding only works in the context of inheritance, 
// where a derived class inherits from a base class.

// Virtual Function: The function in the base class must be declared as virtual 
// to allow overriding.

// Same Signature: The overriding method in the derived class must have the same
//  signature (name and parameters) as the one in the base class.

// Dynamic Binding: Overriding enables runtime polymorphism, where the method 
// that gets called is determined at runtime based on the type of the object, 
// not the type of the pointer/reference to it.
class Animal{    
    
    public:

    //methods
    //called at run time
    //It will check for derived object if overriden function is present then
    //that function is called
    virtual void speak(){
        cout<<"HU HU!"<<endl;
    }

};


class Dog : public Animal{
    public:
    
    //method
    //overriden function from base class
    void speak(){
        cout<<"Bark!"<<endl;
    }

};
int main(){
    Animal* a1 = new Dog();  //pointer of base class and object of derived class is created
    a1->speak();  
    return 0;
}