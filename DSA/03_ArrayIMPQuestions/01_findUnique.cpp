#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = arr[0];
    for(int i=1;i<size;i++){
        ans^=arr[i];
    }
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
    cout<<"Enter the odd size of array contains single unique element and every other comes twise :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    disp(arr,n);

    int uniqueEle = findUnique(arr,n);
    cout<<"Unique element is :"<<uniqueEle<<endl;
    return 0;
}