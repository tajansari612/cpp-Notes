#include<iostream>
using namespace std;

int sumOfAll(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }

    return ans;
}
int main(){
    int size;
    int arr[size];
    cout<<"Enter the size of the array :";
    cin>>size;
    cout<<"Enter elements :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int sum = sumOfAll(arr,size);
    cout<<"Sum of all elements of array is :"<<sum<<endl;
    return 0;
}