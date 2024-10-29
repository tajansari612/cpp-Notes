#include<iostream>
using namespace std;

//Types of Constructor
//01 Default Constructor (Non-parameterized)
// A default constructor is a constructor that takes no arguments. It is also
// called a zero-argument constructor. The compiler automatically provides a
// default constructor if the user does not define one.

//02 Parameterized Constructor
// A parameterized constructor is a constructor that takes one or more
// arguments. The arguments are used to initialize the member variables of the
// object.

//03 Copy Constructor
// A copy constructor is a constructor that takes an object of the same class
// as its argument. It is used to create a copy of an existing object.


class rectangle{
    //Data members/properties
    int l;
    int b;

    public:  //Access specifier

    //default constructor (Non-parameterized constructor)
    rectangle(){   
        l=0;
        b=0;
    }

    //parameterized constructor
    rectangle(int l,int b){  
        this->l=l;
        this->b=b;
    }

    //Methods
    void area(){
        cout<<"Area :"<<l*b<<endl;
    }
    void perimeter(){
        cout<<"Perimeter :"<<(2*l + 2*b)<<endl;
    }
};
int main(){
    //Default(Non-parameterized) contructor
    rectangle* r1=new rectangle();
    r1->area();
    r1->perimeter();

    //Parameterized constructor
    rectangle* r2=new rectangle(5,8);
    r2->area();
    r2->perimeter();

    return 0;
}