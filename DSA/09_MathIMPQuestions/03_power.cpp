#include<iostream>
using namespace std;

long long power(int a1,int b){
    if(b==0) return 1;
    if(a1==0) return 0;
    long long a=a1;
    long long res=1;
    while(b>0){
            if(b&1==1){
                res=res*a;
            }
            a=a*a;
            b=b>>1;
    }
    return res;
    
}
int main(){
    int a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    long long pow=power(a,b);
    cout<<"a^b is :"<<pow<<endl;
    return 0;
}