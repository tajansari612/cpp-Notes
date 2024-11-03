#include<iostream>
using namespace std;

// When properties and member function of a base class are passed to the derived
// class

// Advantage of C++ Inheritance
// Code reusability: 
// Now you can reuse the members of your parent class. So, there is no need to 
// define the member again. So less code is required in the class.

class Teacher{    
    //properties
    protected:
    string dept;

    private:
    double salary;

    public:
    string name;

    //Parameterized constructor
    Teacher(string name, string dept, double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;
        cout<<"Teacher's parameterized constructor called!"<<endl;
    }
    // Teacher(){cout<<"Teacher's default constructor called!"<<endl;};

    //methods
    void changeDept(string dept){
        this->dept = dept;
    }
    void disp(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Dept: "<<this->dept<<endl;
        cout<<"Salary: "<<this->salary<<endl;
    }

    //Destructor
    ~Teacher(){
        cout<<"Teacher's destructor called!"<<endl;
    }
};


class Student : public Teacher{
    public:
    int rollNo;

    //Parameterized constructor
    //At the time of object creation firstly parent constructor is called then
    //child constructor is called

    //Explicitly calling teacher's constructor
    Student(string name, string dept, int rollNo) : Teacher(name, dept, 0) {
        this->rollNo = rollNo;
        cout<<"Student's parameterized constructor called!"<<endl;
    }

    //methods
    void dispInfo(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Roll No: "<<this->rollNo<<endl;
        cout<<"Dept: "<<this->dept<<endl;
        // cout<<"Salary: "<<this->salary<<endl;  //private member of base class
                                                  //hence inaccesible
    }

    //Destructor
    //Oppositely at the time of object deletion firstly child destructor is 
    //called then parent destructor is called
    ~Student(){
        cout<<"Student's destructor called!"<<endl;
    }

};
int main(){
    // Teacher t1("Taj","Comp",600); //Here t1 is an object
    // t1.disp();

    Student s1("Ayaj","Civil",700);
    // s1.disp();  //Inherited member function from teacher
    s1.dispInfo(); //member function of student
    return 0;
}