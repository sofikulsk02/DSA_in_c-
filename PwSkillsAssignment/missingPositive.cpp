#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    vector<int>nums;
    for(int i=0; i<n;i++){
        int q;
        cin>>q;
        nums.push_back(q);
        if(nums.size()>1){
            if(nums[i]-nums[i-1]!=1) ans=i+1;
        }
    }
    cout<<ans;
}