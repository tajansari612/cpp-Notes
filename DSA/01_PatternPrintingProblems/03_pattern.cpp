#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+j+1<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1-j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char('A'+n-j+i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}