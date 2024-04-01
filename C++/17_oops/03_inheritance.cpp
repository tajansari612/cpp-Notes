#include<iostream>
using namespace std;

// The capability of a class to derive properties and characteristics from
// another class is called Inheritance. Inheritance is one of the most
// important features of Object-Oriented Programming. 

// Types of inheritance
//01 Single inheritance
// Single inheritance is defined as the inheritance in which a derived
// class is inherited from the only one base class.

//02 Multilevel inheritance
// When one class inherits another class which is further inherited by
// another class, it is known as multi level inheritance in C++.
// Inheritance is transitive so the last derived class acquires all the
// members of all its base classes.

//03 Hybrid Inheritance
// Hybrid inheritance is a combination of more than one type of inheritance.

//04 Hierarchical Inheritance
// Hierarchical inheritance is defined as the process of deriving more than
// one class from a base class.

//05 Multiple Inheritance
// Multiple Inheritance is a feature of C++ where a class can inherit from
// more than one class. i.e one subclass is inherited from more than one
// base class.
class parent{
    public:
    int x;
    int y;
};

class child1 : public parent{

};
int main(){
    parent p1;
    p1.x=19;
    p1.y=23;
    cout<<p1.x<<" "<<p1.y<<endl;

    child1 ch1;
    ch1.x=13;
    ch1.y=34;
    cout<<ch1.x<<" "<<ch1.y<<endl;
    
    return 0;
}