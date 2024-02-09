#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Time Complexity O(1)
//Space Complexity O(n)
int hashing(int arr[],int n,int x){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]=i+1;
    }
    if(mp[x]>=1){
        return mp[x]-1;
    }
    return -1;
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
    cout<<"Enter the element to be searched :";
    int x;
    cin>>x;
    int ind = hashing(arr,n,x);
    if(ind==-1){
        cout<<"Element is not present in the array"<<endl;
    }else{
        cout<<"Element is present at "<<ind<<" index"<<endl;
    }
    return 0;
}