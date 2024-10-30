#include<iostream>
using namespace std;

// In C++, shallow copy and deep copy refer to two ways of copying objects that 
// manage resources like dynamically allocated memory. These approaches differ 
// in how they handle pointers or references within an object.

// Shallow Copy
// A shallow copy copies all of an object's member variables as-is, including 
// any pointers. It only duplicates the pointer values, not the actual memory 
// they point to.

// Advantage: 
// It’s faster because it simply copies the memory addresses without 
// duplicating the data.

// Disadvantage: 
// Since both the original and the copied objects point to the same memory, 
// modifying one object’s data through the pointer will affect the other. 
// Additionally, when either object is destroyed, the memory could be freed 
// twice, causing undefined behavior or program crashes.

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

    //Default copy constructor is a shallow copy constructor
    student s2(s1);  //shallow copy constructor automaically called
    s2.disp();
    s2.setCgpa(9.3);
    s2.disp();  // cgpa of s2 is set to 9.3
    s1.disp();  // cgpa of s1 is also set to 9.3 which was not supposed to happen
                // this is the disadvantage of shallow copy
    // Hence shallow copy is used when no pointer is there i.e. no dynamic memory
    // allocation is there

    return 0;
}