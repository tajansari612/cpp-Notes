#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char('A'+ i)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char('A'+ j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    char st = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<st++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    st='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char(st+i+j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==(n-1) || j==(n-1)){
                cout<<"*"<<" ";
            }else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==(n-1) || j==(n-1)){
                cout<<j+1<<" ";
            }else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}