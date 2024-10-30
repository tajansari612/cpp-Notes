#include<iostream>
using namespace std;

// this pointer 
// this pointer refers to the address of current object
// this pointer is a special pointer that points to current object
// (*this).prop is same as this->prop
class student{
    //data members/properties
    int rollNo;
    string name;
    int age;
    string gender;

    public:
    //constructor (Automatically called at the time of object creation)
    student(int rollNo,string name,int age,string gender){
        (*this).rollNo=rollNo;
        (*this).name=name;
        (*this).age=age;
        (*this).gender=gender;
        
        //the above code is same as below
        // this->rollNo=rollNo;
        // this->name=name;
        // this->age=age;
        // this->gender=gender;
    }

    //member functions/methods
    void disp(){
        // cout<<"rollNo :"<<(*this).rollNo<<endl;
        // cout<<"name  :"<<(*this).name<<endl;
        // cout<<"age :"<<(*this).age<<endl;
        // cout<<"gender :"<<(*this).gender<<endl;

        //the above code is same as below
        cout<<"rollNo :"<<this->rollNo<<endl;
        cout<<"name  :"<<this->name<<endl;
        cout<<"age :"<<this->age<<endl;
        cout<<"gender :"<<this->gender<<endl;
    }
};
int main(){
    student s1(14,"Taj",23,"Male");  //object
    s1.disp();
    return 0;
}

// In C++, the this pointer is a special pointer that points to the current 
// instance(object) of a class. When a member function is called for a particular 
// object, the this pointer is automatically passed to the function, giving 
// it access to the object’s members (data and functions). 
// Here’s how this works:

// Accessing Instance(object) Variables: Inside a member function, you can use 
// this to access the instance(object) variables of the object that called the 
// function.

// Returning the Current Object: It is often used to return the current object 
// from a member function, allowing chaining of operations.

// Distinguishing Between Parameters and Member Variables(data memebers): If a 
// parameter has the same name as a class member variable, this can be used to 
// differentiate them.