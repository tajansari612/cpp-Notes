#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,vector<int> &tmp,vector<vector<int>> &ans,int &sum,int &k,int ind){
    if(sum==k and (ans.size()==0 || ans.back()!=tmp)){
        ans.push_back(tmp);
    }
    if(ind>=arr.size() or sum>k) return;
    

    //exclude
    solve(arr,tmp,ans,sum,k,ind+1);

    //indlude
    tmp.push_back(arr[ind]);
    sum+=arr[ind];
    solve(arr,tmp,ans,sum,k,ind);
    sum-=arr[ind];
    tmp.pop_back();
}
vector<vector<int>> combinationSum(vector<int>& arr, int k) {
    vector<vector<int>> ans;
    vector<int> tmp;
    int sum=0;
    solve(arr,tmp,ans,sum,k,0);
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
    int k;
    cout<<"Enter the target sum :";
    cin>>k;
    vector<vector<int>> ans=combinationSum(nums,k);
    cout<<"subsets :";
    disp(ans);
    return 0;
}