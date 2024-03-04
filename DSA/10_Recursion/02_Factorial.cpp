#include<iostream>
using namespace std;

long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number to find factorial :";
    cin>>n;
    long long fact=factorial(n);
    cout<<"The required factorial is :"<<fact<<endl;
    return 0;
}