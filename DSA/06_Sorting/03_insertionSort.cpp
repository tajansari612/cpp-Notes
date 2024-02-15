#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Space complexity O(1)
//Time complexity O(N^2)
void bubbleSort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
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