#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Time Complexity O(2^N)
//Space Complexity O(1)
//Problem link
//https://takeuforward.org/arrays/longest-subarray-with-sum-k-postives-and-negatives/
int maximumSubarrayWithGivenSum(int arr[],int n,long long k){
    int PreSum[n];
    PreSum[0]=arr[0];
    for(int i=1;i<n;i++){
        PreSum[i] = PreSum[i-1] + arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<PreSum[i]<<" ";
    // }cout<<endl;\

    unordered_map<int,int> mp;
    unordered_map<int,int>::iterator iter;
    int ans=0;
    for(int i=0;i<n;i++){
        if(PreSum[i]==k){
            ans=max(ans,i+1);
        }

        int check = PreSum[i]-k;
        if(!(mp.find(PreSum[i])!=mp.end())){
            mp[PreSum[i]]=i;
        }
        if(mp.find(check)!=mp.end()){
            ans=max(ans,i-mp[check]);
        }
        
    }

    // for(iter=mp.begin();iter!=mp.end();iter++){
    //     cout<<iter->first<<" "<<iter->second<<"----";
    // }
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