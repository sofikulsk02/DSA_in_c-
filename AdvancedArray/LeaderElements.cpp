#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>&nums){
    int n=nums.size()-1;
    int res=INT_MIN;
    vector<int>ans;
    for(int i=n;i>=0;i--){
        int curr=nums[i];
        if(res<=curr){
              res=curr;
              ans.push_back(res);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
     vector<int> nums={12,34,10,3,5};
     vector<int> result = leaders(nums);
     for (int x : result) {
         cout << x << " ";
     }
     cout << endl;
}