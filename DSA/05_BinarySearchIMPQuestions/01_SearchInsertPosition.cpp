#include<iostream>
using namespace std;

//Time Complexity O(logn)
//Space Complexity O(1)
int SearchInsertPosition(int arr[],int n,int x){
    int i=0;
    int j=n-1;
    int ans;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(arr[mid]>=x){
            ans=mid;
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    return ans;
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
    cout<<"Enter the element to be inserted :";
    int x;
    cin>>x;
    int ind = SearchInsertPosition(arr,n,x);
    cout<<"Either the element is present or can be insert at index :"<<ind<<endl;
    return 0;
}