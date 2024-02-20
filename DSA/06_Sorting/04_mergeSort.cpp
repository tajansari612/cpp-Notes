#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Space complexity O(N)
//Time complexity O(NLogN)
void merge(vector<int>& arr,int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int arr1[n1],arr2[n2];
    int j=l;
    for(int i=0;i<n1;i++){
        arr1[i]=arr[j++];
    }
    j=mid+1;
    for(int i=0;i<n2;i++){
        arr2[i]=arr[j++];
    }

    int i=0;
    j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[k++]=arr1[i++];
        }else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<n1){
        arr[k++]=arr1[i++];
    }
    while(j<n2){
        arr[k++]=arr2[j++];
    }
    delete[] arr1;
    delete[] arr2;
}
void mergeSort(vector<int>& arr,int l,int r){
    if(l>=r){
        return;
    }

    int mid=(r+l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
    return;
    
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
    mergeSort(arr,0,n-1);
    cout<<"sorted array is :";
    disp(arr,n);
    return 0;
}