#include<iostream>
using namespace std;

int main(){
    int n =5;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" "<<" ";
        }

        for(int k=0;k<=i;k++){
            cout<<k+1<<" ";
        }

        for(int l=0;l<i;l++){
            cout<<i-l<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<j-i+1<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*"<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*"<<" ";
        }
        for(int j=i;j<n;j++){
            cout<<n-j<<" ";
        }
        cout<<endl;
    }
    return 0;
}