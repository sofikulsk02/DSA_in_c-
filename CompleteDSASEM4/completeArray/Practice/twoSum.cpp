#include<bits/stdc++.h>
using namespace std;
bool TwoSum(int nums [],int n,int x){
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((nums[i]+nums[j])==x) return true;
        }
      }
      return false;
}
int main(){
    int x;
    cin>>x;
    int nums[]={12,32,34,98,199};
    int n=sizeof(nums)/sizeof(nums[0]);
    cout<<TwoSum(nums,n,x);
}