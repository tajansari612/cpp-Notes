#include<iostream>
using namespace std;

//Approach 01
//Time Complexity O(N)
//Space Complexity O(1)
int findDuplicate(int *arr, int size)
{
    //Write your code here
    for(int i=0;i<size;i++){
        if(arr[abs(arr[i])-1]>0){
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }else{
            return abs(arr[i]);
        }
    }
}

//Approach 02
//Time Complexity O(N)
//Space Complexity O(1)
int findDuplicate2(int *arr, int n)
{
    //Write your code here
    int ans = 1;
    for(int i=2;i<n;i++){
        ans^=i;
    }
    cout<<ans<<" ";
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    cout<<ans<<" ";
	 return ans;
}
void disp(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements between 1 and n-1 containing one duplicate element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    disp(arr,n);

    // int duplicateEle = findDuplicate(arr,n);
    int duplicateEle = findDuplicate2(arr,n);
    cout<<"Duplicate element is :"<<duplicateEle<<endl;
    return 0;
}