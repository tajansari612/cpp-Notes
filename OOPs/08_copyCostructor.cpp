#include<iostream>
using namespace std;


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