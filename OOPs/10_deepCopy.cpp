#include<iostream>
using namespace std;

// In C++, shallow copy and deep copy refer to two ways of copying objects that 
// manage resources like dynamically allocated memory. These approaches differ 
// in how they handle pointers or references within an object.

// Deep Copy
// A deep copy duplicates the actual memory or resources an object holds, 
// creating an independent copy of all dynamically allocated data. This ensures 
// that the original and copied objects each have separate memory.

// Advantage: 
// Modifications to the copied object don’t affect the original, and there are 
// no issues with double deletion since each object has its own memory.

// Disadvantage: 
// It’s slower and more complex, as it requires explicit code to allocate new 
// memory and copy data for each resource.


class student{
    //data members/properties
    int rollNo;
    string name;
    double* cgpa;

    public:
    //constructor (Automatically called at the time of object creation)
    student(int rollNo,string name,double cgpa){        
        this->rollNo=rollNo;
        this->name=name;
        this->cgpa = new double;
        *(this->cgpa) = cgpa;

    }

    //Deep constructor
    student(student &s){
        this->rollNo=s.rollNo;
        this->name=s.name;
        this->cgpa = new double;
        *(this->cgpa) = *(s.cgpa);
    }

    //member functions/methods
    void disp(){
        // (*this).prop is same as this->prop //refer 07_thisPointer
        cout<<"rollNo :"<<(*this).rollNo<<endl;
        cout<<"name  :"<<(*this).name<<endl;
        cout<<"name  :"<<*((*this).cgpa)<<endl;
    }
    void setCgpa(double cgpa){
        *(this->cgpa) = cgpa;
    }
};
int main(){
    //Parameterized constructor
    student s1(14,"Taj",7.56);  //object
    s1.disp();
    cout<<endl;

    //Deep copy constructor (it has to manually created)
    student s2(s1);
    s2.disp();
    cout<<endl;

    s2.setCgpa(9.3);
    s2.disp();  // cgpa of s2 is set to 9.3
    cout<<endl;
    s1.disp();  // cgpa of s1 is remains to 7.56 which is supposed to happen
                // this is the advantage of deep copy over shallow copy
    // Hence deep copy is used when pointers are there i.e. dynamic memory
    // allocation is there
    //deep copy handles unexpected and unwanted behaviour due to pointers and 
    // dynamic memory allocation
    cout<<endl;
    return 0;
}