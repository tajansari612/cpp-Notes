#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Space complexity O(LogN)
//Time complexity O(NLogN)

void countSort(vector<int>& arr,int n){
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<n;i++){
        int ctr=count[i];
        while(ctr>0){
            arr[j++]=i;
            ctr--;
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
    cout<<"Enter the elements which is less than size of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countSort(arr,n);
    cout<<"sorted array is :";
    disp(arr,n);
    return 0;
}