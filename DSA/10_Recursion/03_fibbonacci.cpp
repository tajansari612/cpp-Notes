#include<iostream>
using namespace std;

int fibbonacci(int n){
    if(n==0 or n==1){
        return n;
    }
    return fibbonacci(n-1)+fibbonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter the number to find fibbonacci :";
    cin>>n;
    int ans=fibbonacci(n);
    cout<<"The required fibbonacci number is :"<<ans<<endl;
    return 0;
}