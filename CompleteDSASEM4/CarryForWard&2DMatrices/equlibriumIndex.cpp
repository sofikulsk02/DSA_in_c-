#include<bits/stdc++.h>
using namespace std;
int equilibriumIndex(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        // the leftSum
        int leftSum=0;
        for(int j=0;j<i;j++){
            leftSum+=arr[j];
        }
        // the rightSum
        int rightSum=0;
        for(int j=i+1;j<n;j++){
            rightSum+=arr[j];
        }
        // check if the leftSum is equal to the rightSum then return the ith index
        if(leftSum==rightSum) return i;
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,0,3};
    cout<<equilibriumIndex(arr);  //this approach is:Naive-approach O(n2) and the space is O(1);
}