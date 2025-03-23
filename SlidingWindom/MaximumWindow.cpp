#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    ios_base::sync_with_stdio;
    cin.tie(0); cout.tie(0);
    int arr[9]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maximumSum=INT_MIN;
    int sum=0;
    for(int i=0; i<k;i++){
        sum+=arr[i];
    }
    int i=1; 
    int j=k;
    int maxIndx=-1;
    while(j<n){
      int  currSum=sum+arr[j]-arr[i-1];
        if(maximumSum<currSum){
            maximumSum=currSum;
            maxIndx=i;
        }
        sum=currSum;
        i++;
        j++;
    }
    cout<<maximumSum<<endl;
    cout<<maxIndx;
}