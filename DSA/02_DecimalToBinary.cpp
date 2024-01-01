#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string deciToBin(int n){
    string ans = "";
    while(n!=0){
        if(n&1==1){
            ans.push_back('1');
        }else{
            ans.push_back('0');
        }
        n = n >> 1;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal number less than 2^31-1 & greater than 0 : ";
    cin>>n;
    string binary = deciToBin(n);
    cout<<binary<<endl;
    return 0;
}