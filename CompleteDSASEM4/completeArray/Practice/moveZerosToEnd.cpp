#include<bits/stdc++.h>
using namespace std;
void zeroAtend(int nums[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(nums[i]!=0) ans.push_back(nums[i]);
    }
    int noz=n-ans.size();
    for(int i=ans.size();i<n;i++){
        ans.push_back(0);
    }
    for(int  i=0; i<ans.size();i++){
        cout<<ans[i]<< " ";
    }
}
int main(){
    int arr []={1,0,23,4,0,6,7,0,98,0,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    zeroAtend(arr,n);
}