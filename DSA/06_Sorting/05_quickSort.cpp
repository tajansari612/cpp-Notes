#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Space complexity O(LogN)
//Average Time complexity is O(NLogN)
//Worst Time complexity is O(N^2)
int partition(vector<int>& arr,int low,int high){
    int i=low;
    int j=low;
    while(j<high){
        if(arr[j]<arr[high]){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
    swap(arr[i],arr[high]);
    return i;
}
void quickSort(vector<int>& arr,int low,int high){
    if(low>=high){
        return;
    }
    int p=partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
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
    quickSort(arr,0,n-1);
    cout<<"sorted array is :";
    disp(arr,n);
    return 0;
}