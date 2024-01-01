#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Arrays

// An array is a collection of similar data elements stored at contiguous memory locations.
// It is the simplest data structure where each data element can be accessed directly by only
// using its index number.

//Key points
//01 Stores similar i.e homogeneous type of elements
//02 Stored in contiguous memory locations i.e linear location
//03 0 based indexing is used
//04 The name of the array (ex. arr) represents the location of the first element


//04 syntax 
// int arr[size];
// int arr[5] = {1,2,3,4,5};
// int arr[] = {1,2,3,4,5,6};

//Types of arrays 
//01 Single dimenstional array (1D array)
//02 Multidimentional array (ND array)
int main(){
    //01 Single Dimentional array (1D array)
    int arr[] = {2,4,5,6,7};
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<endl;

    //Array Traversing
    int arr2[5] = {1,2,3,4,5};
    //01 for loop
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    //02 for each loop
    for(int ele:arr2){
        cout<<ele<<" ";
    }
    cout<<endl;


    int arr3[5];
    arr3[0] = 11;
    arr3[1] = 22;
    arr3[2] = 33;
    arr3[3] = 44;
    arr3[4] = 55;
    int size = sizeof(arr3)/sizeof(arr3[0]);  // sizeof() method gives the allocated memory
    for(int i=0;i<size;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    return 0;
}
