#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> & nums, int idx){
    if(idx>=nums.size()) return 0;
    return nums[idx]+solve(nums,idx+1);
}
int main(){
   vector<int>nums={12,2,4,5};
    cout<<solve(nums,0);
}