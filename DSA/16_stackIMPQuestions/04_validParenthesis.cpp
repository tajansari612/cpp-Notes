#include<iostream>
#include<stack>
using namespace std;

void solve(string &s,stack<char> &st,int ind){
    if(ind>=s.size()) return;

    if(st.size()==0){
        st.push(s[ind]);
        solve(s,st,ind+1);
    }else{
        if(s[ind]==']' && st.top()=='['){
            st.pop();
            solve(s,st,ind+1);
        } else if (s[ind] == ')' && st.top() == '(') {
            st.pop();
            solve(s, st, ind + 1);
        } else if (s[ind] == '}' && st.top()=='{'){
            st.pop();
            solve(s, st, ind + 1);
        }else{
            st.push(s[ind]);
            solve(s, st, ind + 1);
        }
    }
}
bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> st;
    solve(s,st,0);
    return st.size()==0;
}

int main(){
    string s;
    cout<<"Enter a string 'S' consisting of '{'', '}', '('', ')', '[' and ']' :";
    cin>>s;
    bool ans=isValidParenthesis(s);
    if(ans){
        cout<<"String is balanced!"<<endl;
    }else{
        cout<<"String is not balanced!"<<endl;
    }
    return 0;
}