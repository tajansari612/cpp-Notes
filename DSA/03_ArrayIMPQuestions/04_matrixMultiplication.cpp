#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the matrix :";
    cin>>n;
    int matA[n][n];
    cout<<"Enter the elements of matrix A :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matA[i][j];
        }
    }
    int matB[n][n];
    cout<<"Enter the elements of matrix B :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matB[i][j];
        }
    }
    
    int ans[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;
            int k=0;
            while(k<n){
                ans[i][j]+=matA[i][k]*matB[k][j];
                k++;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}