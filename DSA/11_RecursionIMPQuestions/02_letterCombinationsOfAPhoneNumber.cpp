#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &digits,string output,vector<string> &mapping,int ind,vector<string> &ans){
        if(ind>=digits.size()){
            ans.push_back(output);
            return;
        }
        int i=digits[ind];
        int n=mapping[i].size();
        for(int j=0;j<n;j++){
            output.push_back(mapping[i][j]);
            solve(digits,output,mapping,ind+1,ans);
            output.pop_back();
        }
    }
vector<string> letterCombinations(vector<int> digits) {
    vector<string> ans;
    string output;
    vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(digits.size()==0) return ans;
    solve(digits,output,mapping,0,ans);
    return ans;
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
            cout<<arr[i][j]<<",";
        }
        cout<<"} ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"size of array less than 5 :";
    cin>>n;
    vector<int> digits(n);
    cout<<"Elements between 2 to 9 inclusive :";
    for(int i=0;i<n;i++){
        cin>>digits[i];
    }
    vector<string> ans=letterCombinations(digits);
    cout<<"subsets :";
    disp(ans);
    return 0;
}