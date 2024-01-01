#include<iostream>
using namespace std;

//Arrays

// An array is a collection of similar data elements stored at contiguous memory locations.
// It is the simplest data structure where each data element can be accessed directly by only
// using its index number.

//Key points

//01 Stores similar i.e homogeneous type of elements

//02 Stored in contiguous memory locations i.e linear location

//03 0 based indexing is used

//04 syntax 
// int arr[size];
// int arr[5] = {1,2,3,4,5};
// int arr[] = {1,2,3,4,5,6};


int main(){
    int arr[] = {2,4,5,6,7};
    int arr2[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
