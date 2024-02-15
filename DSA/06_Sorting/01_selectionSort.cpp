#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Space complexity O(1)
//Time complexity O(N^2)
void selectionSort(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        int small=arr[i];
        int ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<small){
                small=arr[j];
                ind=j;
            }
        }
        swap(arr[i],arr[ind]);
    }
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
    selectionSort(arr,n);
    cout<<"sorted array is :";
    disp(arr,n);
    return 0;
}