#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i;j<(n-1);j++){
            cout<<" "<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=i;j<(n-1);j++){
            cout<<" "<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=i;j<(n-1);j++){
            cout<<" "<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<i+1 +k<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}