#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int N,string tmp,vector<string> &ans,int l,int r,int ind){
    if(ind>=N){
        ans.push_back(tmp);
        return;
    }

    if(l<(N/2)){
        solve(N,tmp+"(",ans,l+1,r,ind+1);
        if(r<l){
            solve(N,tmp+")",ans,l,r+1,ind+1);
        }
    }else{
        solve(N,tmp+")",ans,l,r+1,ind+1);
    }
    
}
vector<string> validParenthesis(int N){
    // Write your code here.
    vector<string> ans;
    if(N==0) return ans;
    solve(2*N,"(",ans,1,0,1);
}
void disp(vector<string>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int m=arr[i].size();
        cout<<"{";
        for(int j=0;j<m;j++){
            if(j==m-1){
                cout<<arr[i][j]<<"";
                continue;
            }
            cout<<arr[i][j];
        }
        cout<<"} ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"number of pairs :";
    cin>>n;
    
    vector<string> ans=validParenthesis(n);
    cout<<"valid parenthesis :";
    disp(ans);
    return 0;
}