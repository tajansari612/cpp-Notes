#include<iostream>
using namespace std;
long long pow(int n,int m){
    long long ans=n;
    for(int i=1;i<m;i++){
        ans*=n;
    }
    return ans;
}
int MthRoot(int n, int m) {
  // Write your code here.
  if(m==1){
    return n;
  }
  if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int i=0;
    int j=n;
    while(i<j){
        long long mid=i+(j-i)/2;
        if(pow(mid,m) == n){
            return mid;
        }else if(pow(mid,m)>n){
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    
    if(pow(i,m)==n){
        return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number to find the root :";
    cin>>n;
    int m;
    cout<<"Enter the mth root :";
    cin>>m;
    
    long long Mthroot = MthRoot(n,m);
    cout<<"The root element is :"<<Mthroot<<endl;
    return 0;
}