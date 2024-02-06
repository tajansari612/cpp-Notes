#include<iostream>
using namespace std;

//Time Complexity O(2^N)
//Space Complexity O(1)
int maximumSubarrayWithGivenSumPositiveElementsOnly(int arr[],int n,long long k){
    int ans=0;
    long long sum=arr[0];
    int i=0;
    int j=0;
    while(j<n){

        while(i<=j && sum>k){
            sum-=arr[i++];
        }

        if(sum==k){
            ans=max(ans,j-i+1);
        }
        j++;
        if(sum<=k){
            sum+=arr[j];
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

    cout<<"The max subarray lenght is :"<<maximumSubarrayWithGivenSumPositiveElementsOnly(arr,n,k);
    
    return 0;
}