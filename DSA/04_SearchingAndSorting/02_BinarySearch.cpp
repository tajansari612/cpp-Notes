#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int x){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
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
    cout<<"Enter the elements in increasing order :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched :";
    int x;
    cin>>x;
    int ind = binarySearch(arr,n,x);
    if(ind==-1){
        cout<<"Element is not present in the array"<<endl;
    }else{
        cout<<"Element is present at "<<ind<<" index"<<endl;
    }
    return 0;
}