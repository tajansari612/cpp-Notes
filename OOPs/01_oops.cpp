#include <iostream>
using namespace std;

// Why oops?
// Object-oriented programming (OOP) is a popular programming paradigm that 
// provides a structured way to solve complex problems. OOPs has many 
// advantages, including:

//01 Encapsulation
// OOP concepts provide the structure to develop efficient and organized
// programs. Encapsulation makes objects self-contained, which helps with
// troubleshooting and collaborative development.

//02 Modular structure
// OOP provides a clear modular structure for programs. Programmers can update
// different parts of the system without making large-scale changes.

//03 Code reusability
// OOP allows code to be reused through inheritance. For example, one or more
// classes can derive from an existing class. This helps reduce code length by
// avoiding unnecessary writing of repeated lines of code.

//04 Data redundancy
// OOP concepts can create data redundancy by holding the same piece of data
// in two different places. When similar functionality is needed in multiple
// classes, common class definitions can be written by inheriting them.

//05 Security
// OOP ensures data security through data hiding, encapsulation, and abstraction. 

class student{
    public:       //access specifiers(public,private,protected), default is private
    //data members/properties
    int rollNo;
    string name;
    int age;
    bool gender;

    //constructor
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

    //Destructor
    ~student(){
        cout<<"Destructor is called!"<<endl;
    }
};
int main(){
    student s1(14,"Taj",23,1);  //object
    s1.disp();
    // s1->disp();        //error
    cout<<s1.rollNo<<endl;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.gender<<endl;

    student* s2=new student(15,"Ayaj",21,1);
    s2->disp();
    //s2.disp();         //error
    cout<<s2->rollNo<<endl;
    cout<<s2->name<<endl;
    cout<<s2->age<<endl;
    cout<<s2->gender<<endl;
    delete s2;
    return 0;
}