#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//time complexity O(N)
// space complexity O(1)

long int maxSumSubArray(int arr[],int n,int k){
    long long int sum = 0;
    long long int ans = -1;

    //Initial sum
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }

    ans = sum;    
    for(int i=k;i<n;i++){
        sum +=arr[i] - arr[i-k];
        ans=max(ans,sum);
    }
    return ans;
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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

    int subarraySize;
    cout<<"Enter the size of subarray :";
    cin>>subarraySize;

    long int ans = maxSumSubArray(arr,n,subarraySize);
    cout<<"The maximum sum subarray is :"<<ans<<endl;
    return 0;
}