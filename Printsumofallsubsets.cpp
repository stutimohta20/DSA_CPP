// Printing sum of all subsets of an array

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
  void solve(int ind,vector<int> arr, int n,vector<int> &res, int sum){
    if(ind == n){
       res.push_back(ans);
      return;
    } 
    solve(ind+1,arr,n,res,sum+arr[i]);
    solve(ind+1,arr,n,res,sum);
 }
  
  
  vector<int> subsetSums(vector<int> arr, int n){
      vector<int> &res;
    solve(0,arr,n,res,0);
    return res;
  }
}




int main(){
  vector<int> arr{3,1,2};
  Solution obj;
  vector<int> ans = ob.subsetSums(arr,arr.size());
  sort(ans.begin(),ans.end());
  for(auto sum: ans){
     cout<<sum<<" ";
  }
  endl;
  return 0;
}
