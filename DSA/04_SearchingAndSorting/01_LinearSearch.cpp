#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
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
    cout<<"Enter the element to be searched :";
    int x;
    cin>>x;
    int ind = linearSearch(arr,n,x);
    if(ind==-1){
        cout<<"Element is not present in the array"<<endl;
    }else{
        cout<<"Element is present at "<<ind<<" index"<<endl;
    }
    return 0;
}