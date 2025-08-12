#include<bits/stdc++.h>
using namespace std;
bool twoSum(vector<int>&nums,int target){
    unordered_set<int>st;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
   for(int i=0;i<nums.size();i++){
    int ele=target-nums[i];
    if(st.find(ele)!=st.end()){
         return true;
    }
   }
   return false;
}
int main(){
    vector<int>nums={2,6,5,8,11};
    int target=8;
    cout<<twoSum(nums,target);
}