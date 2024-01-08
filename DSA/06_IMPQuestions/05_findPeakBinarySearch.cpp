#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int i=0;
    int n= arr.size();
    int j=n-1;
    
    while(i<=j){
        int mid=i+(j-i)/2;
        if(mid==0){
            mid++;
        }else if(mid==n-1){
            mid--;
        }
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid]>arr[mid-1]){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    return -1;
    
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in mountain order :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ind = peakIndexInMountainArray(arr);
    if(ind==-1){
        cout<<"Peak element is not present in the array"<<endl;
    }else{
        cout<<"Peak element is present at "<<ind<<" index"<<endl;
    }
    return 0;
}