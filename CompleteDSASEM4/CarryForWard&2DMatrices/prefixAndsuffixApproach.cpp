#include<bits/stdc++.h>
using namespace std;
int equilibriumIndex(vector<int>&arr){
    int n=arr.size();
    // we need to calculate the prefix and suffix sum of all the indices
    // the two vectors pre[] and suf[];
    vector<int>pre(n,0);
    vector<int>suf(n,0);
    // initialize the fist of pre and end of suf
    pre[0]=arr[0];
    suf[n-1]=arr[n-1];
    // calculate the prefix of all the indices
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    // calculate the suffix for all the indices
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]+arr[i];
    }
    // check if the pre[i] and suf[i] is equal for some i or not
    for(int i=0;i<n;i++){
        if(pre[i]==suf[i]) return i;
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,0,3};
    cout<<equilibriumIndex(arr);
}