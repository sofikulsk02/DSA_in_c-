#include<bits/stdc++.h>
using namespace std;
int findEquilibrium(vector<int>& nums){
    int rightSum=0;
    int leftSum=0;
    for(int i=0;i<nums.size();i++){
        rightSum+=nums[i];
    }
    for(int i=0; i<nums.size();i++){
        rightSum-=nums[i];
        if(rightSum==leftSum) return i;
        leftSum+=nums[i];
    }
    return -1;
}
int main(){
     vector<int>nums={1, 2, 0, 3};
     cout<<findEquilibrium(nums);
     return 0;
}