#include<iostream>
using namespace std;

int majorityElement(int arr[],int n){
	int ctr=0;
	int el;
	for(int i=0;i<n;i++){
		if(ctr==0){
			ctr++;
			el=arr[i];
		}else if (el==arr[i]){
			ctr++;
		}else{
			ctr--;
		}
	}
	ctr=0;
	for(int i=0;i<n;i++){
		if(el==arr[i]){
			ctr++;
		}
	}

	if(ctr>=(n/2)){
		return el;
	}
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
    cout<<"Enter the elements where occurence one element is greater than n/2 :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    disp(arr,n);

    int majorityEle = majorityElement(arr,n);
    cout<<"Majority element is :"<<majorityEle<<endl;
    return 0;
}