#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//class is a user-defined blueprint for creating objects.
//Here Teacher is a class
class Teacher{
    public:
    //attributes/properties/data member
    string name;
    string dept;
    string subject;
    double salary;

    //methods/member function
    void changeDept(string dept){
        this->dept = dept;
    }
};

int main(){
    //Object is an instance of a class that represent real-world entities
    Teacher t1; //Here t1 is an object

    t1.name = "Taj";
    t1.dept = "Comp";
    t1.subject = "BXE";
    t1.salary = 600000;

    cout<<"Name: "<<t1.name<<endl;
    cout<<"Dept: "<<t1.dept<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Salary: "<<t1.salary<<endl;

    return 0;
}