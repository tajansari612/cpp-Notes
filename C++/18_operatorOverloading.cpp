#include <iostream>
using namespace std;

// Operator overloading is a compile-time polymorphism in which the operator
// is overloaded to provide the special meaning to the user-defined data
// type. Operator overloading is used to overload or redefines most of the
// operators available in C++. It is used to perform the operation on the
// user-defined data type. For example, C++ provides the ability to add the
// variables of the user-defined data type that is applied to the built-in
// data types.
// example

class complex{
    int real;
    int img;
public:
    complex(){
        this->real=0;
        this->img=0;
    }
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void disp(){
        cout<<this->real<<" i"<<this->img<<endl;
    }
    //operator overloading
    complex operator + (complex &c){
        complex ans;
        ans.real=real+c.real;  //within the class the private data memebers of other object of same class is accessible
        ans.img=img+c.img;
        return ans;
    }

};
int main(){
    complex c1(1,2);
    complex c2(1,3);
    c1.disp();
    c2.disp();
    complex c3=c2+c1;;
    c3.disp();
    return 0;
}