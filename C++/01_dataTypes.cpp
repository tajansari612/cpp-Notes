#include<iostream>
#include <typeinfo>
using namespace std;

int main(){

    // Fundamental/Primitive Data types

    //01 Integer
    int num1 = 123;
    cout<<num1<<" "<<sizeof(num1)<<" "<<typeid(num1).name()<<endl;

    //02 Char
    char ch = 't';
    cout<<ch<<" "<<sizeof(ch)<<" "<<typeid(ch).name()<<endl;

    //03 float
    float f1 = 123.56;
    cout<<f1<<" "<<sizeof(f1)<<" "<<typeid(f1).name()<<endl;

    //04 boolean
    bool b1 = true;
    cout<<b1<<" "<<sizeof(b1)<<" "<<typeid(b1).name()<<endl;

    //05 double
    double d1 = 123.989897989696;
    cout<<d1<<" "<<sizeof(d1)<<" "<<typeid(d1).name()<<endl;

    //06 long
    long num2 = 7886;
    cout<<num2<<" "<<sizeof(num2)<<" "<<typeid(num2).name()<<endl;

    //07 long long
    long long num3 = 7886;
    cout<<num3<<" "<<sizeof(num3)<<" "<<typeid(num3).name()<<endl;
    
    return 0;
}