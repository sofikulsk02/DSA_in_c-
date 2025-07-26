#include<bits/stdc++.h>
using namespace std;
void rotateByd(int nums[],int d,int n){
    int temp[d];
    for(int i=0; i<d;i++){
        temp[i]=nums[i];
    }
    for(int i=d;i<n;i++){
        nums[i-d]=nums[i];
    }
    //putting back the temp at the end
    for(int i=n-d;i<n;i++){
        nums[i]=temp[i-(n-d)];
    }
}
int main(){
    int nums[]={1,2,3,4,5,6,7};
    int n=7;
    int d=3;
    rotateByd(nums,d,n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}