#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void solve(vector<vector<int>> &m,vector<string> &ans,string &tmp,int n,int i,int j){
    if(i==(n-1) && j==(n-1)){
        ans.push_back(tmp);
        return;
    }
    
    //down
    if((i+1)<n && m[i+1][j]==1){
        tmp.push_back('D');
        m[i][j]=0;
        solve(m,ans,tmp,n,i+1,j);
        m[i][j]=1;
        tmp.pop_back();
    }
    
    //right
    if((j+1)<n && m[i][j+1]==1){
        tmp.push_back('R');
        m[i][j]=0;
        solve(m,ans,tmp,n,i,j+1);
        m[i][j]=1;
        tmp.pop_back();
    }
    
    //left
    if((j-1)>=0 && m[i][j-1]==1){
        tmp.push_back('L');
        m[i][j]=0;
        solve(m,ans,tmp,n,i,j-1);
        m[i][j]=1;
        tmp.pop_back();
    }
    
    
    //up
    if((i-1)>=0 && m[i-1][j]==1){
        tmp.push_back('U');
        m[i][j]=0;
        solve(m,ans,tmp,n,i-1,j);
        m[i][j]=1;
        tmp.pop_back();
    }
    // cout<<tmp<<endl;
}
vector<string> findPath(vector<vector<int>> &m, int n) {
    // Your code goes here
    vector<string> ans;
    string tmp;
    if(m[0][0]==1){
        solve(m,ans,tmp,n,0,0);
    }
    
    return ans;
}
void disp(vector<string>& arr){
    int n=arr.size();
    if(n==0){
        cout<<-1<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the n for n*n maze :";
    cin>>n;
    vector<vector<int>> maze(n,vector<int>(n));
    cout<<"Enter the value as 1 for track and 0 for block :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    vector<string> ans= findPath(maze,n);
    disp(ans);
    return 0;
}