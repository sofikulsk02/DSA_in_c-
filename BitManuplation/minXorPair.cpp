#include<bits/stdc++.h>
using namespace std;
int minXor(vector<int>&nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int minXor=INT_MAX;
    for(int i=1;i<n;i++){
        int xr=0;
        xr=nums[i]^nums[i-1];
        if(xr<=minXor) minXor=xr;
    }
    return minXor;
}
int main(){
     vector<int>nums={9,5,3};
     cout<<minXor(nums);
     return 0;
}