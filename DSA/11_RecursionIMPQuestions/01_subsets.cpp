#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums,vector<int> output,vector<vector<int>>& ans,int ind){
        if(ind>=nums.size()){
            ans.push_back(output);
            return ;
        }

        //exclude
        solve(nums,output,ans,ind+1);

        //include
        output.push_back(nums[ind]);
        solve(nums,output,ans,ind+1);

    }
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    solve(nums,output,ans,0);
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
    vector<vector<int>> ans=subsets(nums);
    cout<<"subsets :";
    disp(ans);
    return 0;
}