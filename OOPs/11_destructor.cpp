#include<iostream>
using namespace std;

// A destructor works opposite to constructor; it destructs the objects of 
// classes. It can be defined only once in a class. Like constructors, it is 
// invoked automatically.
// A destructor is defined like constructor. It must have same name as class. 
// But it is prefixed with a tilde sign (~).



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

    //Custom destructor (for deleting dynamic memory allocations)
    ~student(){
        delete cgpa; // deleting dynamic memory as it not going deleted by the 
                     // inbuilt destructor(only for static memory)
        cout<<"Custom destructor called"<<endl;
    }
};
int main(){
    //Parameterized constructor
    student s1(14,"Taj",7.56);  //object
    s1.disp();
    //Inbuilt destructor
    s1.~student();  //Inbuilt destructor is present just like inbuilt constructor
                    //It is called automatically when the object going to destroyed
    return 0;
}