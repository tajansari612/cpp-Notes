#include<iostream>
using namespace std;

void passByValue(int a){
    a+=10;
}
void passByReference(int &a){
    a+=10;
}
int main(){
    int a=10;

    //Creating reference variable
    int &r=a;
    cout<<a<<" "<<r<<endl;

    passByValue(a);
    cout<<a<<endl;
    passByReference(a);
    cout<<a<<endl;
    return 0;
}