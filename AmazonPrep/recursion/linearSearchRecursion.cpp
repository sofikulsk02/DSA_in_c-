#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&nums,int x,int i){
    if(i>nums.size()-1){
        return -1;
    }
    if(nums[i]==x) return i;
    return solve(nums,x,i+1);
}
int main(){
    vector<int>nums={12,33,5,3,4,76};
    int x=5;
    int i=0;
    cout<<solve(nums,x,i);
}