#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>&nums,int idx){
    if(idx==nums.size()) return;
    cout<<nums[idx]<<" ";
    printArray(nums,idx+1);
}
int main(){
    vector<int>nums={11,34,4,45,2,8,6};
    printArray(nums,0);
}