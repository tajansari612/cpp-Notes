#include<iostream>
using namespace std;

//time complexity O(N^2)
// space complexity O(1)

int pairsCounter(int arr[],int n,int k){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = arr[i]+arr[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
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
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    disp(arr,n);

    int k;
    cout<<"Enter the element to find the pairs :";
    cin>>k;

    int pairs = pairsCounter(arr,n,k);
    cout<<"Total number of pairs are :"<<pairs<<endl;
    return 0;
}