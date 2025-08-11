#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={2,0,2,1,1,0};
    int lo=0;
    int mid=0;
    int hi=nums.size()-1;
    while(mid<=hi){
        if(nums[mid]==2){
            int temp=nums[hi];
            nums[hi]=nums[mid];
            nums[mid]=temp;
            hi--;
        }
        else if(nums[mid]==0){
            int temp=nums[lo];
            nums[lo]=nums[mid];
            nums[mid]=temp;
            lo++;
            mid++;
        }
        else{
            mid++;
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}