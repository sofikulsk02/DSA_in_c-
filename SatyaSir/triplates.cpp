#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={3,2,6,4,7,10,9,12};
    int n=nums.size();
    int ans=0;
    for(int j=1;j<n-1;j++){
        int cl=0;
        int cg=0;
        for(int i=0;i<j;i++){
            if(nums[j]>nums[i]) cl++;
        }
        for(int k=j+1;k<=n-1;k++){
            if(nums[j]<nums[k]) cg++;
        }
        ans+=cg*cl;
    }
    cout<<ans<<endl;
}