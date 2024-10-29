#include<iostream>
using namespace std;

// public - members are accessible from outside the class.

// private - members cannot be accessed (or viewed) from outside the class.

// protected - members cannot be accessed from outside the class, however, 
// they can be accessed in inherited classes.
class parent{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
    
};

class child1 : public parent{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};

class child2 : protected parent{
    // x will becomes protected
    // y will remain protected
    // z will not be accessible
};

class child3 : private parent{
    // x will become private
    // y will become private
    // z will not be accessible
};

//Example
class Teacher{    
    //properties
    public:
    string name;

    protected:
    string dept;
    string subject;

    private:
    double salary;

    //methods
    void changeDept(string dept){
        this->dept = dept;
    }
};
class Student : public Teacher{
    public:
    void setInfo(string name, string dept, string subject, double salary){
        this->name = name; //accessing public no error
        this->dept = dept; //accessing protected no error
        this->subject = subject; //accessing protected no error
        // this->salary = salary; //accessing private error
    }
    void dispInfo(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Dept: "<<this->dept<<endl;
        cout<<"Subject: "<<this->subject<<endl;
        // cout<<"Salary: "<<this->salary<<endl;
    }
};
int main(){
    Teacher t1; //Here t1 is an object

    t1.name = "Taj";  //accessing public no error
    // t1.dept = "Comp"; //accesing protected error
    // t1.subject = "BXE";
    // t1.salary = 600000; //accessing private error

    cout<<"Name: "<<t1.name<<endl;
    // cout<<"Dept: "<<t1.dept<<endl;
    // cout<<"Subject: "<<t1.subject<<endl;
    // cout<<"Salary: "<<t1.salary<<endl;

    Student s1;
    s1.setInfo("Ayaj","Electronics","OOPs",500000);
    s1.dispInfo();
    return 0;
}