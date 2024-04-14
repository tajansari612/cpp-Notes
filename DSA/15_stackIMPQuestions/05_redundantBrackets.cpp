#include<iostream>
#include<stack>
using namespace std;

bool solve(string &s,stack<char> &st,int ind){
    if(ind>=s.size()) return false;


    if(s[ind]=='(' || s[ind]=='+' || s[ind]=='-' || s[ind]=='*' || s[ind]=='/'){
        st.push(s[ind]);
        solve(s,st,ind+1);
    }else if(s[ind]==')'){
        bool flag=true;
        while(st.top()!='('){
            if(st.top()=='(' || st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                flag=false;
            }
            st.pop();
        }
        if(flag){
            return true;
        }
        st.pop();
        solve(s,st,ind+1);
    }else {
        solve(s,st,ind+1);
    }
}
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    return solve(s,st,0);
}
int main(){
    string s;
    cout<<"Enter a mathematical expression consisting of '(', ')', '+', '-', '*', '/' :";
    cin>>s;
    bool ans=findRedundantBrackets(s);
    if(ans){
        cout<<"Redundant bracket is present!"<<endl;
    }else{
        cout<<"Redundant bracket is not present!"<<endl;
    }
    return 0;
}