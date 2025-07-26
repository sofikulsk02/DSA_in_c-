#include<bits/stdc++.h>
using namespace std;
void display(int nums[], int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    int nums[]={1,23,54,98,90};
    int n = sizeof(nums) / sizeof(nums[0]);
    display(nums, n);
}