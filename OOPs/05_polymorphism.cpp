#include<iostream>
using namespace std;

// The word “polymorphism” means having many forms. In simple words, we can
// define polymorphism as the ability of a message to be displayed in more
// than one form. A real-life example of polymorphism is a person who at
// the same time can have different characteristics. A man at the same time
// is a father, a husband, and an employee. So the same person exhibits
// different behavior in different situations. This is called polymorphism.
// Polymorphism is considered one of the important features of Object-Oriented
// Programming.

//Types of polymorphism
//01 Compile time polymorphism
// The overloaded functions are invoked by matching the type and number of
// arguments. This information is available at the compile time and,
// therefore, compiler selects the appropriate function at the compile
// time. It is achieved by <function overloading> and <operator overloading>
// which is also known as static binding or early binding.
// example
int add(){
    return 0;
}
int add(int a){
    return a;
}
int add(int a,int b){
    return a+b;
}
//and so on


//02 Run time polymorphism
// Run time polymorphism is achieved when the object's method is invoked at
// the run time instead of compile time. It is achieved by <method overriding>
// which is also known as dynamic binding or late binding.
//example
int multi(int a,int b){
    return a*b;
}
int multi(int a,int b){
    return a%2;
}
int main(){
    
    return 0;
}