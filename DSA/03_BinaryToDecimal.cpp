#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binToDeci(string binary){
    int i = 0;
    int ans = 0;
    while(i<(binary.length())){
        if(binary[i] == '0'){
            ans = ans<<1;
        }else{
            ans = (ans<<1)|1;
        }
        i++;
    }
    return ans;
}
int main(){
    string binary;
    cout<<"Enter 31-bit binary number : ";
    cin>>binary;
    int decimal = binToDeci(binary);
    cout<<decimal<<endl;
    return 0;
}