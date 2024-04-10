#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    // st.pop();   //error output becomes empty for all other next operations
    st.push(12);
    st.push(14);
    st.push(16);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

    cout<<st.empty()<<endl;
    return 0;
}