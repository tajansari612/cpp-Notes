#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums,vector<vector<int>>& ans,int ind){
        if(ind>=nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            solve(nums,ans,ind+1);
        }

    }
vector<vector<int>> permutations(vector<int>& nums) {
    vector<vector<int>> ans;
    solve(nums,ans,0);
    return ans;
}
void disp(vector<vector<int>>& arr){
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
    cout<<"size of array :";
    cin>>n;
    vector<int> nums(n);
    cout<<"Elements :";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> ans=permutations(nums);
    cout<<"permutations :";
    disp(ans);
    return 0;
}