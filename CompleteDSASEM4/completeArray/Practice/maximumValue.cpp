#include<bits/stdc++.h>
using namespace std;
int maxElement(int nums[],int n){
    int Max=INT_MIN;
    for(int i=0;i<n;i++){
        if(Max<nums[i]) Max=nums[i];
    }
    cout<<Max<<endl;
    return Max;
}
int main(){
    int nums []={12,34,277,86,188};
    int n=sizeof(nums)/sizeof(nums[0]);
    return maxElement(nums,n);
}