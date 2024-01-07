#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    //01 Two Dimentional array (2D array)
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    vector<vector<int>> vec1;
    vec1.push_back({1,2,3});
    vec1.push_back({4,5,6});
    vec1.push_back({7,8,9});
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<vec1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
