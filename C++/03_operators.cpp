#include<iostream>
using namespace std;

int main(){
    // Arithmatic operator
    
    //01 Addition
    int a = 5;
    int b = 6;
    int add = a+b;
    cout<<add<<endl;

    //02 Substraction
    int x = 10;
    int y = 6;
    int sub = x-y;
    cout<<sub<<endl;

    //03 Multiplication
    int a1 = 5;
    int b1 = 2;
    int mult = a1*b1;
    cout<<mult<<endl;

    //04 Division
    int a3 = 144;
    int b3 = 12;
    int div = a3/b3;
    cout<<div<<endl;

    //05 Modulo (remainder)
    int rem = 57%10;
    cout<<rem<<endl;

    //06 Increment Operator
    int increment = 10;
    increment++;
    cout<<increment<<endl;

    //07 Decrement Operator
    int decrement = 10;
    decrement--;
    cout<<decrement<<endl;

    //Extra ex
    string s1 = "taj";
    string s2 = " ansari";
    cout<<s1+s2<<endl;
    // cout<<s1 - s2<<endl;   //error
    // cout<<s1*4<<endl;      //error

    int a9 = 2.0;
    cout<<a9/5<<endl;    //o/p will be 0 due to type of a is int
    cout<<2.0/5<<endl;


    //Relational Operator

    int x1 = 10;
    int x2 = 20;
    
    //01 Less than
    bool b2 = x1 < x2;
    cout<<b2<<endl;

    //02 Greater than
    b2 = x1 > x2;
    cout<<b2<<endl;

    //03 equal to
    b2 = x1 == x2;
    cout<<b2<<endl;

    //04 not equal to
    b2 = x1 != x2;
    cout<<b2<<endl;

    //05 less than or equal to
    b2 = x1 <= x2;
    cout<<b2<<endl;

    //06 greater than or equal to 
    b2 = x1 >= x2;
    cout<<b2<<endl;



    //Logical Operator

    //01 and(true && true)
    //02 or(false || flase)
    //03 not(!false)


    //Assignment Operator

    //01 +=
    int ass1 = 10;
    ass1 +=10;
    cout<<ass1<<endl;

    //02 -=
    ass1 -=10;
    cout<<ass1<<endl;

    //03 *=
    ass1 *=5;
    cout<<ass1<<endl;

    //04 /=
    ass1 /=5;
    cout<<ass1<<endl;

    //05 =
    ass1 = 65;
    cout<<ass1<<endl;


    //Ternary Operator
    54>7? cout<<"greater"<<endl : cout<<"less"<<endl;  
    return 0;
}