#include<iostream>
using namespace std;

//01 Pass by value
// In pass-by-value, a variable's value is passed to a function or method.
// The function copies the variable and works with the copy, so it doesn't 
// change anything in the original variable. 
// Here the copy of the variable is created.

void disp(int a){
    cout<<a<<endl;   //Here the copy of passed variable is created and stored in variable a 
}


//02 Pass by reference
// In pass-by-reference, a reference to the variable is passed to the function.
// The function uses the original variable, so if you change the variable in the
// other function, it changes in the original variable too.
// Copy of the variable is not created.

void disp2(int* b){
    cout<<b<<endl;   //Here b stores the reference i.e the address in memory
    cout<<*b<<endl;  //* is used to get the value to the address
}
int main(){

    int a = 10;
    disp(a);

    int b = 12;
    disp2(&b);
        //^
        //|
        // Pass the reference i.e address of the variable in the memory of the variable b
    return 0;
}