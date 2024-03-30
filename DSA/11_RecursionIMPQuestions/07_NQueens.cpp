#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void block(vector<string>& tmp, int i, int j, int n) {
    // left-right
    for (int lr = 0; lr < n; lr++) {
        if (lr == j)
            continue;
        tmp[i][lr] = '.';
    }

    // top-bottom
    for (int tp = 0; tp < n; tp++) {
        if (tp == i)
            continue;
        tmp[tp][j] = '.';
    }

    // diagonal
    // bottom-roght
    int d1 = i + 1;
    int d2 = j + 1;
    while (d1 < n && d2 < n) {
        tmp[d1++][d2++] = '.';
    }
    // top-left
    d1 = i - 1;
    d2 = j - 1;
    while (d1 >= 0 && d2 >= 0) {
        tmp[d1--][d2--] = '.';
    }

    // bottom-left
    d1 = i + 1;
    d2 = j - 1;
    while (d1 < n && d2 >= 0) {
        tmp[d1++][d2--] = '.';
    }

    // top-right
    d1 = i - 1;
    d2 = j + 1;
    while (d1 >= 0 && d2 < n) {
        tmp[d1--][d2++] = '.';
    }
}

void remove(vector<string>& tmp, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tmp[i][j] = ' ';
        }
    }
}

void solve(vector<vector<string>>& ans, vector<string>& tmp, int ind,
            int& n) {
    if (ind >= n) {
        ans.push_back(tmp);
        return;
    }

    for (int i = 0; i < n; i++) {
        vector<string> tmp2 = tmp;
        if (tmp2[ind][i] == ' ') {
            tmp2[ind][i] = 'Q';
            block(tmp2, ind, i, n);
            solve(ans, tmp2, ind + 1, n);
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> tmp(n, string(n, ' '));
    solve(ans, tmp, 0, n);
    return ans;
}
void disp(vector<vector<string>> &ans,int n){
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<n;j++){
            if(j==n-1){
                cout<<'"'<<ans[i][j]<<'"';
            }else{
                cout<<'"'<<ans[i][j]<<'"'<<",";
            }
            
        }
        cout<<"]";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n for n*n matrix (should less than 10):";
    cin>>n;
    vector<vector<string>> ans=solveNQueens(n);
    disp(ans,n);
    return 0;
}