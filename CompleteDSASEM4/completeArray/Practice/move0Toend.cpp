#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={12,32,2,0,9,0,33,3,0,2,0};
    int n=sizeof(nums)/sizeof(nums[0]);
    int j=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}