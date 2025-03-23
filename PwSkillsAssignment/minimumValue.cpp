#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    int minValue=INT16_MAX;
    for(int i=0; i<n;i++){
        int q;
        cin>>q;
         nums.push_back(q);
        if(nums[i]<minValue) minValue=nums[i];
    }
    cout<<minValue<<endl;
}