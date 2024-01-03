#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//time complexity O(N)
// space complexity O(1)

int secondLargetstElement(int arr[],int n){
    if(n<2){
        return -1;
    }
    int first = arr[0];
    int second = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second = arr[i];
        }
    }
    if(second == INT_MIN){
        return -1;
    }
    return second;
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

    int second = secondLargetstElement(arr,n);
    cout<<"The second largest element is :"<<second<<endl;
    return 0;
}