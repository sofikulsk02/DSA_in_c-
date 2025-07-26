#include<bits/stdc++.h>
using namespace std;
void isPresent(int nums[],int n,int k){
    int idx=-1;
      for(int i=0;i<n;i++){
        if(nums[i]==k) {
            idx=i;
            break;
        }
      }
    if(idx!=-1) cout<<"The element is present at index"<<idx<<endl;
    else cout<<"Element not found";
}
int main(){
    int nums []={12,32,45,34,65,87,14};
    int n=sizeof(nums)/sizeof(nums[0]);
    int k;
    cout<<"Enter the value ypu want to find";
    cin>>k;
    isPresent(nums,n,k);
}