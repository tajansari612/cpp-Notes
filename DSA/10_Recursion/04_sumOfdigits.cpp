#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    int r=n%10;
    n/=10;
    return r+sumOfDigits(n);
}
int main(){
    int n;
    cout<<"Enter the number to find sum of its digits :";
    cin>>n;
    int sum=sumOfDigits(n);
    cout<<"The required sum is :"<<sum<<endl;
    return 0;
}