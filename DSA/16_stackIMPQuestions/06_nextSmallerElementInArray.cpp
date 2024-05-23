#include<iostream>
#include<bits/stdc++.h>
#include <stack>
using namespace std;


vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    for(int i=n-1;i>=0;i--){
       while(st.size()!=0 && arr[i]<=st.top()){
            st.pop();
       }
       if(st.size()==0){
            st.push(arr[i]);
            arr[i]=-1;
        }else{
            int tmp=st.top();
            st.push(arr[i]);
            arr[i]=tmp;
        }
    }
    return arr;
}
void disp(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=nextSmallerElement(arr,n);
    cout<<"Resultant array is :";
    disp(ans,n);
    return 0;
}