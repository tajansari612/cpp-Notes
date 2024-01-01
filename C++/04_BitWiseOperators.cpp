#include<iostream>
using namespace std;

int main(){
    //Bitwise Operators

    //01 Bitwise Complement (~)
    int num1 = 0;
    num1 = !num1;
    cout<<num1<<endl;

    //02 Bitwise or (|)
    int var1 = 8;                      // 1 0 0 0
    int var2 = 9;                      // 1 0 0 1
    int var3 = var1 | var2;            // 1 0 0 1
    cout<<var3<<endl;

    //03 Bitwise and (&)
    var3 = var1 & var2;
    cout<<var3<<endl;

    //04 Bitwise Exclusive or (^)
    var3 = var1 ^ var2;   // both same then zero
    cout<<var3<<endl;

    //05 Left Shift Operator
    num1 = 8;
    cout<<(num1<<1)<<endl;   //every time left shift the number by 1 it multiply
    cout<<(num1<<2)<<endl;   // the number by 2
    cout<<(num1<<3)<<endl;

    cout<<endl;
    //06 Right Shift Operator
    num1 = 16;
    cout<<(num1>>1)<<endl;  //every time right shift the number by 1 it divide
    cout<<(num1>>2)<<endl;  // the number by 2
    cout<<(num1>>3)<<endl;
    return 0;
}