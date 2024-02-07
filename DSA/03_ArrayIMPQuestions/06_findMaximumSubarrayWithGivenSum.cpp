#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Time Complexity O(2^N)
//Space Complexity O(1)
//Problem link
//https://takeuforward.org/arrays/longest-subarray-with-sum-k-postives-and-negatives/
int maximumSubarrayWithGivenSum(int arr[],int n,long long k){
    unordered_map<int,int> mp;
    unordered_map<int,int>::iterator iter;
    int sum = 0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            ans=max(ans,i+1);
            
        }

        int check = sum - k;
        
        if(mp.find(check)!=mp.end()){
            ans=max(ans,i-mp[check]);
        }
        if(!(mp.find(sum)!=mp.end())){
            mp[sum]=i;
        }
        
        
    }

    return ans;
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

    long long k;
    cout<<"Enter the sum for finding max subarray :";
    cin>>k;

    cout<<"The max subarray lenght is :"<<maximumSubarrayWithGivenSum(arr,n,k);
    
    return 0;
}