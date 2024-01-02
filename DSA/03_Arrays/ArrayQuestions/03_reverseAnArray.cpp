#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int mid = n/2;
    for(int i=0;i<mid;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
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
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    disp(arr,n);
    reverseArray(arr,n);
    cout<<"The reverse of the array is :";
    disp(arr,n);
    return 0;
}