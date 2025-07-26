#include<bits/stdc++.h>
using namespace std;
void reversedArray(int nums[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[n - i - 1];
        nums[n - i - 1] = temp;
    }
}
int main(){
    int nums[]={12,13,14,15,16};
    int n=sizeof(nums)/sizeof(nums[0]);
    reversedArray(nums,n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}