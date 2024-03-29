#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,vector<int> &ans,int sum,int ind){
    ans.push_back(sum);
    if(ind>=arr.size()) return;


    for(int i=ind;i<arr.size();i++){
        solve(arr,ans,sum+arr[i],i+1);
    }
    
}
vector<int> subsetSums(vector<int> arr)
{
    // Write Your Code here
    vector<int> ans;
    int sum=0;
    int ind=0;
    solve(arr,ans,sum,ind);
    
    return ans;
}
void disp(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    vector<int> ans=subsetSums(nums);
    sort(ans.begin(),ans.end());
    cout<<"sums :";
    disp(ans);
    return 0;
}