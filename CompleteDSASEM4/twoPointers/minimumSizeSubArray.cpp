#include<bits/stdc++.h>
using namespace std;
int minSizeSubarray(vector<int>&nums,int target){
    int n=nums.size();
    int sum=0;
    int start=0,end=0;
    int res=INT_MAX;
    while(end<n){
        sum+=nums[end];
        while(sum>=target){
              sum-=nums[start];
              res=min(res,end-start+1);
              start++;
        }
        end++;
    }
    return res==INT_MAX ? 0: res;
}
int main(){
    vector<int>nums={2,3,1,2,4,3};
    int target=7;
    cout<<minSizeSubarray(nums,target);
}