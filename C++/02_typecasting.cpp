//Type casting refers to the conversion of one data type to another in a program.


#include<iostream>
#include <typeinfo>
using namespace std;

int main(){
    char a = 'a';
    cout<<a<<endl;

    int num = a;
    cout<<num<<endl;    //Prints the ASCII value

    int num2 = 98;
    char ch = 98;
    cout<<char(num2)<<" "<<ch<<endl;

    //char has size 1 byte i.e 8-bit
    char ch1 = 126;       // Last value
    cout<<ch1<<endl;
    
    //interger to string
    int num5 = 12345;
    string s1 = to_string(num5);
    cout<<typeid(num5).name()<<" "<<typeid(s1).name()<<endl;

    //string to integer
    string s2 = "54";
    int num7 = stoi(s2);
    cout<<num7<<" "<<typeid(num7).name()<<endl;
    return 0;
}