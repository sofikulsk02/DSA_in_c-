#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT16_MIN;
    int sum=0;
    int maxIdx=-1;
    int k=4;
    for(int i=0; i<k;i++){
        sum+=arr[i];
    }
    int i=1,j=k;
    while(j<n){
        int currentSum=sum+arr[j]-arr[i-1];
        if(maxSum<=currentSum){
            maxSum=currentSum;
            maxIdx=i;
        }
        sum=currentSum;
        i++;
        j++;
    }
    cout<<maxSum<<" starting from "<<maxIdx<<endl;
}