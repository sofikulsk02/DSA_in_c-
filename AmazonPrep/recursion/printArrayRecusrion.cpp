#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&nums,int idx){
      if(idx==nums.size()-1){
         cout<<nums[idx];
         return;
      }    
      cout<<nums[idx]<<" ";
      solve(nums,idx+1);
}
int main(){
    vector<int> nums={12,2,344,5,53,57,67};
    int idx=0;
    solve(nums,idx);
}