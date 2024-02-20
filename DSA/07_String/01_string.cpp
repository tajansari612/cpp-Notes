#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    string str="taj";
    cout<<str<<" "<<typeid(str).name()<<endl;
    
    return 0;
}