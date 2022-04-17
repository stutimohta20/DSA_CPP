//Given an array print all the sum of the subset generated from it, in the increasing order.

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
   void solve(int i,int n,vector<int> arr,vector<int> &ans,int sum){
        if(i == n){
            ans.push_back(sum);
            return;
        }
        solve(i+1,n,arr,ans,sum+arr[i]);
        solve(i+1,n,arr,ans,sum);
    }
    
    vector<int> subset(vector<int> arr,int n){
        vector<int> ans;
        solve(0,n,arr,ans,0);
        return ans;
    }
    
};

int main(){
    
    vector<int> arr{3,1,2};
    Solution ob;
    
    vector<int> ans = ob.subset(arr,arr.size());
    sort(ans.begin(),ans.end());
    for(auto sum: ans){
        cout<<sum<<" ";
    }
    cout<<endl;
    return 0;
}
