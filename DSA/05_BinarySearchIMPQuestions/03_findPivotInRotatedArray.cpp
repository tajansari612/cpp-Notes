#include<iostream>
using namespace std;

int pivotSearch(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            return mid;
        }else if(arr[mid]<arr[i]){
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in increasing rotated order :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int pivot = pivotSearch(arr,n);
    cout<<"Pivot is present at the index :"<<pivot<<endl;
    return 0;
}