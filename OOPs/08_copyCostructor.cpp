#include<iostream>
using namespace std;

// In C++, a copy constructor is a special constructor used to create a new 
// object as a copy of an existing object. The copy constructor is 
// automatically called when an object is:
// 1) Initialized with another object of the same type (e.g., MyClass obj2 = obj1;).
// 2) Passed by value to a function.
// 3) Returned by value from a function.

// Default Copy Constructor
// If you don’t define a copy constructor, the compiler provides a default one 
// that performs a shallow copy. 
// However, with classes that have dynamically allocated memory, this can lead 
// to issues like double deletion, where both objects try to delete the same 
// memory. 
// Hence, a custom copy constructor is often needed in such cases.
class student{
    //data members/properties
    int rollNo;
    string name;
    int age;
    string gender;

    public:
    //constructor (Automatically called at the time of object creation)
    student(int rollNo,string name,int age,string gender){        
        this->rollNo=rollNo;
        this->name=name;
        this->age=age;
        this->gender=gender;
    }

    //custom copy constructor
    student(student &s){
        cout<<"custom constructor called!"<<endl;
        this->name = "Mr. " + s.name;
        this->rollNo = 2 + s.rollNo;
        this->age = 3 + s.age;
        this->gender = s.gender;
    }

    //member functions/methods
    void disp(){
        // (*this).prop is same as this->prop //refer 07_thisPointer
        cout<<"rollNo :"<<(*this).rollNo<<endl;
        cout<<"name  :"<<(*this).name<<endl;
        cout<<"age :"<<(*this).age<<endl;
        cout<<"gender :"<<(*this).gender<<endl;
    }
};
int main(){
    //Parameterized constructor
    student s1(14,"Taj",23,"Male");  //object
    // s1.disp();

    //default copy constructor
    // if no copy cunstructor is created then default copy constructor is used 
    // by class
    // student s2(s1);
    // s2.disp();

    //custom copy constructor
    student s2(s1);
    s2.disp();
    return 0;
}