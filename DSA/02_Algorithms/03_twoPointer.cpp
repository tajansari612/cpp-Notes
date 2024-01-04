#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//time complexity O(N)
// space complexity O(1)

void segregateArray(int arr[],int n){
    int i=0;      //left pointer 
    int j=n-1;    //right pointer
    while(i<j){
        if(arr[i]==1){
            if(arr[j]==0){
                swap(arr[i],arr[j]);
                i++;j--;
            }else{
                j--;
            }
        }else{
            i++;
        }
    }
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
    cout<<"Enter the elements either 0 or 1 :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    segregateArray(arr,n);
    cout<<"The segragated array is :";
    disp(arr,n);
    return 0;
}