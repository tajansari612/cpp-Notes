#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int> &st,int x,int ind){
    if(ind==0){
        st.push(x);
        return;
    }
    int tmp=st.top();
    st.pop();
    insert(st,x,ind-1);
    st.push(tmp);
}
void solve(stack<int> &st,int ind){
    if(ind==0) return;

    int tmp=st.top();
    st.pop();
    insert(st,tmp,ind-1);
    solve(st,ind-1);
    
}
void reverseStack(stack<int> &st) {
    // Write your code here
    solve(st,st.size());
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
    reverseStack(st);
    cout<<"Reversed stack is :";
    disp(st);
    return 0;
}