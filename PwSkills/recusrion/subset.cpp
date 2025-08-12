#include<bits/stdc++.h>
using namespace std;
void subSet(int idx,vector<int>&arr,int n,vector<int>&ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    subSet(idx+1,arr,n,ans);
    if(ans.size()==0 || arr[idx-1]==ans[ans.size()-1]){
        ans.push_back(arr[idx]);
        subSet(idx+1,arr,n,ans);
    }
}
int main(){
    vector<int>arr={1,2,3,4};
    vector<int>ans;
    int n=arr.size(); // Fix: use arr.size(), not arr.size()-1
    subSet(0,arr,n,ans);
}