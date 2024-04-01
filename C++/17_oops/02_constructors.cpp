#include<iostream>
using namespace std;

//Constructor in C++ is a special method that is invoked automatically at the
// time of object creation. It is used to initialize the data members of new
// objects generally. The constructor in C++ has the same name as the class or 
// structure.

//Types of Constructor
//01 Default Constructor
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

//Note: In addition to these three types of constructors, C++ also supports
// constructor overloading. This means that you can define multiple constructors
// for the same class, as long as they have different parameter lists.


// Desctructor
// Destructor is an instance member function that is invoked automatically
// whenever an object is going to be destroyed. Meaning, a destructor is the
// last function that is going to be called before an object is destroyed.
class rectangle{
    int l;
    int b;
    public:
    rectangle(){   //default constructor
        l=0;
        b=0;
    }
    rectangle(int l,int b){  //parameterized constructor
        this->l=l;
        this->b=b;
    }
    // rectangle(rectangle &r){   //copy constructor
    //     this->l=r.l;
    //     this->b=r.b;
    // }
    void area(){
        cout<<"Area :"<<l*b<<endl;
    }
    void perimeter(){
        cout<<"Perimeter :"<<(2*l + 2*b)<<endl;
    }

    ~rectangle(){
        cout<<"Destructor is called!"<<endl;
    }
};
int main(){
    rectangle* r1=new rectangle();
    r1->area();
    r1->perimeter();
    delete r1;
    rectangle* r2=new rectangle(5,8);
    r2->area();
    r2->perimeter();

    rectangle* r3(r2);
    r3->area();
    r3->perimeter();
    delete r3;
    return 0;
}