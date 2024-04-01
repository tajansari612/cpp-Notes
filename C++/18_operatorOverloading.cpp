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
public:
    int real;
    int img;

    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    //operator overloading
    complex operator + (complex &c){
        complex ans(0,0);
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }

};
int main(){
    complex c1(1,2);
    complex c2(1,3);
    cout<<c1.real<<" i"<<c1.img<<endl;
    cout<<c2.real<<" i"<<c2.img<<endl;
    complex c3=c2+c1;;
    cout<<c3.real<<" i"<<c3.img<<endl;
    return 0;
}