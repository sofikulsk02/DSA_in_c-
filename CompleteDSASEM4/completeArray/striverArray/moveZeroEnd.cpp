#include<bits/stdc++.h>
using namespace std;
void moveZero(int nums[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0) j=i;
    }
    if(j==-1) return;
    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
          swap(nums[i],nums[j]);
          j++;
        }
    }
}
int main(){
    int arr[]={12,0,0,9,4,5,0,18,7,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveZero(arr,n);
}