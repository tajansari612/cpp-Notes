#include<iostream>
using namespace std;

int add(int a,int b){
          //^     ^
          //|     |
          //formal parameters
    return a+b;
}

//key point in functions
//01 function name
//02 return type
//03 parameters
//04 function body

// function should defined above the int main(){};
// function should call from int main function

// If we want to define a function after the function call
// we need to use the function prototype
// int add(int a,int b);
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    int result = add(a,b);
                   //^ ^
                   //| |
                   // actual parameters|
    cout<<"Addition is : "<<result<<endl;
    return 0;
}