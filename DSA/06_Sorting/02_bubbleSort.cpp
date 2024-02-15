#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Space complexity O(1)
//Time complexity O(N^2)
void bubbleSort(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubbleSort(arr,n);
    cout<<"sorted array is :";
    disp(arr,n);
    return 0;
}