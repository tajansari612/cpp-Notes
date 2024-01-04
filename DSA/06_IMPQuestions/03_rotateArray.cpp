#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//time complexity O(N)
// space complexity O(1)

void rotateArrLeft(int arr[], int d, int n){
    d = d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
void rotateArrRight(int arr[], int d, int n){
    d = d%n;
    reverse(arr,arr+n-d);
    reverse(arr+n-d,arr+n);
    reverse(arr,arr+n);
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

    int d;
    cout<<"Enter the number of rotations :";
    cin>>d;
    //rotateArrLeft(arr,d,n);
    rotateArrRight(arr,d,n);
    cout<<"The rotated array is :";
    disp(arr,n);
    return 0;
}