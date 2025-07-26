#include<bits/stdc++.h>
using namespace std;
int secondMaxElement(int nums[],int n){
    int Max=INT_MIN;
    for(int i=0;i<n;i++){
        if(Max<nums[i]) Max=nums[i];
    }
    int sMax=INT_MIN;
    for(int i=0;i<n;i++){
      if(nums[i]!=Max && sMax<nums[i]) sMax=nums[i];
    }
    cout<<sMax;
    return sMax;
}
int main(){
 int nums[]={3,12,8,9,10,6};
 int n=sizeof(nums)/sizeof(nums[0]);
 return secondMaxElement(nums,n);
}