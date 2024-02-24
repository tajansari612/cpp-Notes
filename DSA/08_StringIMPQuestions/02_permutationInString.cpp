#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool permutationInString(string s1,string s2){
    int m=s1.size();
    int n=s2.size();
    sort(s1.begin(),s1.end());

    int i=0;
    while(i<n){
        string tmp=s2.substr(i,m);
        // cout<<tmp<<" ";
        sort(tmp.begin(),tmp.end());
        if(tmp==s1) return true;
        i++;
    }
    return false;
}
int main(){
    string s1;
    string s2;
    cout<<"Enter the string s1 :";
    cin>>s1;
    cout<<"Enter the string s2 :";
    cin>>s2;
    bool b=permutationInString(s1,s2);
    if(b) cout<<"Yes";
    else cout<<"No";
    return 0;
}