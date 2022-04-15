#include<bits/stdc++.h>
using namespace std;

 void print(int i,int arr[], vector<int> &v,int sum,int s,int n){
    
    if(i == n){ 
        if(sum == s){
        for(auto it: v)
         cout<<it<<" ";
         cout<<endl;
        }
    
    return;
    }
    //pick not pick
    v.push_back(arr[i]);
    sum = sum+ arr[i];
    print(i+1,arr,v,sum,s,n);
    sum = sum - arr[i];
    v.pop_back();
     print(i+1,arr,v,sum,s,n);
    
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    int i = 0,sum =0;
    vector<int> v;
    print(i,arr,v,sum, s, n);
    return 0;
}
