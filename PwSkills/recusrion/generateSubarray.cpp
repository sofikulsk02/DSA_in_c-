#include<bits/stdc++.h>
using namespace std;
void f(int idx,int n,int arr [],vector<int>&ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    f(idx+1,n,arr,ans);
    if(ans.size()==0 || arr[idx-1]==ans[ans.size()-1]){
        ans.push_back(arr[idx]);
        f(idx+1,n,arr,ans);
        ans.pop_back();
    }
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    f(0,n,arr,ans);
}