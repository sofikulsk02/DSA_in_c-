#include<bits/stdc++.h>
using namespace std;
int eqlIndex(vector<int>&arr){
    int n=arr.size();
    //we have use prefix variable instead of using the array & we need the total sum
    int totalSum=0;
    int pre=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }
    for(int i=0;i<n;i++){
        int suf=totalSum-pre-arr[i];
        if(suf==pre) return i;
        pre+=arr[i];
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,0,3};
    cout<<eqlIndex(arr);
}