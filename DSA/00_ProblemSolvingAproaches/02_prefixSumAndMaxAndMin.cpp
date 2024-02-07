#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//time complexity O(N)
// space complexity O(1)

void prefixSum(int arr[],int n){
    for(int i=1;i<n;i++){
        arr[i] = arr[i]+arr[i-1];
    }
}
void prefixMax(int arr[],int n){
    int maxe = arr[0];
    for(int i=1;i<n;i++){
        maxe = max(arr[i],maxe);
        arr[i] = maxe;
    }
}
void prefixMin(int arr[],int n){
    int mine = arr[0];
    for(int i=1;i<n;i++){
        mine = min(arr[i],mine);
        arr[i] = mine;
    }
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // prefixSum(arr,n);
    // cout<<"The prefix sum array is :";
    // disp(arr,n);

    // prefixMax(arr,n);
    // cout<<"The prefix max array is :";
    // disp(arr,n);

    prefixMin(arr,n);
    cout<<"The prefix min array is :";
    disp(arr,n);
    
    return 0;
}