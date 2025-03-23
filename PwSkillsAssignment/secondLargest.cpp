#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0; i<n;i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }
    int second_max=INT16_MIN;
    int maxElement=INT16_MIN;
    for(int i=0; i<n;i++){
        if(nums[i]>maxElement){
            maxElement=nums[i];
        }
        if(nums[i]!=maxElement && nums[i]>second_max){
            second_max=nums[i];
        }
    }
    cout<<second_max<<endl;
}