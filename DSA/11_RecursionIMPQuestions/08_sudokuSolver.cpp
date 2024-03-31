#include<iostream>
#include<bits/stdc++.h>

using namespace std;


bool isValid(vector<vector<char>> &board,int i,int j,char c){
    for(int k=0;k<9;k++){
        if(board[i][k]==c){
            return false;
        }
        if(board[k][j]==c){
            return false;
        }
        if(board[3*(i/3)+k/3][3*(j/3)+k%3]==c){
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<char>> &board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                for(char c='1';c<='9';c++){
                    if(isValid(board,i,j,c)){
                        board[i][j]=c;
                        if(solve(board)==true){
                            return true;
                        }else{
                            board[i][j]='.';
                        }
                    }
                }
                return false;

            }
        }
    }
    return true;
    
}

void disp(vector<vector<char>>& arr){
    int n=arr.size();

    for(int i=0;i<n;i++){
        int m=arr[i].size();
        cout<<"[";
        for(int j=0;j<m;j++){
            if(j==m-1){
                cout<<arr[i][j]<<"";
                continue;
            }
            cout<<arr[i][j]<<",";
        }
        cout<<"] "<<endl;
    }
    cout<<endl;
}
int main(){
    vector<vector<char>> board(9,vector<char>(9));
    cout<<"Enter the all values of sudoku, enter '.' instead of space :";
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>board[i][j];
        }
    }
    solve(board);
    disp(board);
    return 0;
}