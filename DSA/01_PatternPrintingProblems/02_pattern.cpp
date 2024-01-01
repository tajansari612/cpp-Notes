#include<iostream>
using namespace std;

int main(){
    int n =5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<n-j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<i*3 + j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}