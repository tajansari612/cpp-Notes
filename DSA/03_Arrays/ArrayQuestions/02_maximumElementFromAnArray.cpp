#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumElementFromAnArray(int arr[],int n){
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }

    return ans;
}
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int maxe = maximumElementFromAnArray(arr,size);
    cout<<"Maximum element from an array is :"<<maxe<<endl;
    return 0;
}