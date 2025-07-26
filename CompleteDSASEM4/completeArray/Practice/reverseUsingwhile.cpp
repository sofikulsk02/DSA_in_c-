#include<bits/stdc++.h>
using namespace std;
void reversedArray(int nums[], int n) {
        int l=0,r=n-1;
        while(l<=r){
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++,r--;
        }
}
int main(){
    int nums[]={12,13,14,15,16,19};
    int n=sizeof(nums)/sizeof(nums[0]);
    reversedArray(nums,n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}