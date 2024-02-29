#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<&a<<endl;   //Address-of (&) operator use to extract address

    //Pointers can store addresses
    //data_type *pointer_name;
    int *p=&a;
    cout<<p<<" "<<*p<<endl;     //Dereference (*) operator use to extract the value store on that address

    *p=12;
    cout<<*p<<" "<<a<<endl;   //The value is changed in *p as well as in a


    //Pointer Arithmetic
    a=10;
    int* ptr=&a;
    cout<<ptr+1<<" "<<ptr+2<<" "<<ptr+3<<endl;

    double b=10;
    double* ptrd=&b;
    cout<<ptrd+1<<" "<<ptrd+2<<" "<<ptrd+3<<" "<<ptrd-1<<endl;
    return 0;
}