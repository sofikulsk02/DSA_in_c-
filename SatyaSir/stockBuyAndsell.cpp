#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={8,3,4,7};
    int n=nums.size();
    int max=INT16_MIN;
    int min=INT16_MAX;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i]<min){
            min=nums[i];
        }
    }
    cout<<max-min<<endl;
}