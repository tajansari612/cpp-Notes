#include<iostream>
using namespace std;

int singleNonDuplicate(int arr[],int n)
{
	// Write your code here
    if(n==1){
        return arr[0];
    }
    if(arr[0]!=arr[1]){
        return arr[0];
    }
    if(arr[n-1]!=arr[n-2]){
        return arr[n-1];
    }
	int i=0;
    int j=n-1;
    int mid;
    while(i<=j){
        mid = i + (j-i)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }else if((arr[mid]==arr[mid-1] && mid%2==0) || (arr[mid]==arr[mid+1] && mid%2==1)){
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
    cout<<"Enter the elements in increasing rotated order with one element is single and other elements are twice :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int singleElement = singleNonDuplicate(arr,n);
    cout<<"Pivot is present at the index :"<<singleElement<<endl;
    return 0;
}