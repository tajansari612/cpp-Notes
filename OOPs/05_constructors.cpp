#include<iostream>
using namespace std;

// Constructors:
// Constructor in C++ is a special method that is invoked automatically at the
// time of object creation. 
// It is used to initialize the data members of new objects generally. 
// The constructor in C++ has the same name as the class or structure.

// Characteristics of Constructors in C++:
// The name of the constructor is the same as its class name.
// Constructors are mostly declared (recommended) in the public section of the class though they can be declared in the private section of the class.
// Constructors do not return values; hence they do not have a return type.
// A constructor gets called automatically when we create the object of the class.
// Constructors can be overloaded.
// A constructor cannot be declared virtual.
// A constructor cannot be inherited.
// The addresses of the Constructor cannot be referred to.
// The constructor makes implicit calls to new and delete operators during memory allocation.


class student{
    //data members/properties
    int rollNo;
    string name;
    int age;
    bool gender;

    public:
    //constructor (Automatically called at the time of object creation)
    student(int rollNo,string name,int age,bool gender){
        this->rollNo=rollNo;
        this->name=name;
        this->age=age;
        this->gender=gender;
    }

    //member functions/methods
    void disp(){
        cout<<"rollNo :"<<this->rollNo<<endl;
        cout<<"name  :"<<this->name<<endl;
        cout<<"age :"<<this->age<<endl;
        cout<<"gender :"<<this->gender<<endl;
    }
};
int main(){
    student s1(14,"Taj",23,1);  //object
    s1.disp();
    return 0;
}