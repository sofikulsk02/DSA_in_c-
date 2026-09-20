#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1,1,2,2,2,3,4,4,5,6,6,7,8};
    int s=0;
    int e=1;
    for(int i=0;i<nums.size();i++){
          if(nums[s]==nums[e]){
                e++;
          }
          else{
            s++;
            nums[s]=nums[i];
          }
    }
}