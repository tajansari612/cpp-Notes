#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//time complexity O(N)
// space complexity O(1)

void nextPermutation(int A[],int n){
    int j=n-1;
    while(j>0 && A[j]<=A[j-1]){
        j--;
    }
    if(j==0){
        reverse(A,A+n);
        return;
    }
    int i=n-1;
    
    while(A[j-1]>=A[i]){
        i--;
    }
    swap(A[i],A[j-1]);
    reverse(A+j,A+n);
    return;
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
    
    //nextPermutation(arr,n);

    //There is a built in method in STL for finding next permutation
    next_permutation(arr,arr+n);
    cout<<"The next permutation of given array is :";
    disp(arr,n);
    return 0;
}