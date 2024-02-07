#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadanesAlgo(int arr[],int n){
	long long sum = 0;
    long long ans = LONG_MIN;
    int i=0;
    while(i<n){
        sum+=arr[i];
        ans=max(ans,sum);
        if(sum<=0){
            sum=0;
        }
        i++;
    }
    if(ans<0){
        return 0;
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
    disp(arr,n);

    long long  MaxSum = kadanesAlgo(arr,n);
    cout<<"Maximum sum is :"<<MaxSum<<endl;
    return 0;
}