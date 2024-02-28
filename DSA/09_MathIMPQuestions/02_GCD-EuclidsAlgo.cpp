#include<iostream>
using namespace std;

int EuclidsGcd(int a,int b){
    if(b==0) return a;

    if(a<b){
        b=a^b;
        a=a^b;
        b=a^b;
    }
    a=a%b;
    EuclidsGcd(b,a);
}
int main(){
    int a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    int gcd=EuclidsGcd(a,b);
    cout<<"The gcd is :"<<gcd<<endl;
    return 0;
}