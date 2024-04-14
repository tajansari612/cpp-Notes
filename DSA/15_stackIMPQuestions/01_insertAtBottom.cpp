#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &st,int &x){
    if(st.size()==0){
        st.push(x);
        return;
    };
    int tmp=st.top();
    st.pop();
    solve(st,x);
    st.push(tmp);
}
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    // Write your code here.
    solve(st,x);
    return st;
}
void disp(stack<int> &st){
    if(st.size()==0) return;

    int tmp=st.top();
    st.pop();
    disp(st);
    cout<<tmp<<" ";
    st.push(tmp);
}
int main(){
    int n;
    cout<<"Enter the size of the stack :";
    cin>>n;
    stack<int> st;
    cout<<"Elements :";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    int ele;
    cout<<"Enter the element to be insert at bottom :";
    cin>>ele;
    st=pushAtBottom(st,ele);
    disp(st);
    return 0;
}