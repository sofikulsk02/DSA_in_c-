#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={15,-1,7,2,5,4,2,3};
    int count=0;
    for(int i=0; i<nums.size();i++){
        int maxElement=INT16_MIN;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]>maxElement){
                maxElement=nums[j];
            }
        }
        if(nums[i]>maxElement) count++;
    }
    cout<<count<<endl;
}