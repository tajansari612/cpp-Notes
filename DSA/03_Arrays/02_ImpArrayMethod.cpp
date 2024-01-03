#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void disp(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void disp(char arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //Some Important!!! Array methods

    //01 fill_n(arr,k,x)
    //Iniatializing array with a choosen value
    int arr[18];
    fill_n(arr,16,-5);
    disp(arr,18);

    char arr2[13];
    fill_n(arr2,5,'f');
    disp(arr2,13);

    //02 fill(arr,arr+k,x);
    int arr3[12];
    fill(arr3,arr3+8,5);
    disp(arr3,12);

    //03 reverse(arr,arr+n)   //reverse the array
    int arr4[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    reverse(arr4,arr4+14);
    disp(arr4,14);

    //04 sort(arr,arr+n);   //sorts the array in ascending order
    sort(arr4,arr4+14);
    disp(arr4,14);

    return 0;
}