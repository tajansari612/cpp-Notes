#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int> &st,int x){
	if(st.size()==0 || x>=st.top()){
		st.push(x);
		return;
	}
	int tmp=st.top();
	st.pop();
	insert(st,x);
	st.push(tmp);
}
void sortStack(stack<int> &st)
{
	if(st.size()==0){
		return;
	};

	int tmp=st.top();
	st.pop();
	sortStack(st);
	if(st.size()==0){
		st.push(tmp);
		return;
	}else{
		insert(st,tmp);
	}
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
    sortStack(st);
    cout<<"Sorted stack is :";
    disp(st);
    return 0;
}