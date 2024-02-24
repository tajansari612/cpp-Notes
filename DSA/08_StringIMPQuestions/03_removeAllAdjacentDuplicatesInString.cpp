#include<iostream>
using namespace std;

string removeAdjacentDuplicates(string s){
    int i=1;
    while(i<s.size()){
        if(s[i]==s[i-1]){
            s.erase(i-1,2);
            i-=2;
            if(i<1) i=1;
        }else{
            i++;
        }
        
    }
    return s;
}
int main(){
    string s1;
    cout<<"Enter the string :";
    cin>>s1;
    s1=removeAdjacentDuplicates(s1);
    cout<<s1<<endl;
    return 0;
}