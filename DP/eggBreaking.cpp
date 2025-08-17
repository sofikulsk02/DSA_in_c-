#include<bits/stdc++.h>
using namespace std;
int minAttempt(int k,int n,vector<vector<int>>&dp){
    if(k==1) return n;
    if(n==0) return 0;
    if(dp[n][k]!=-1) return dp[n][k];
    int lo=1,hi=n,ans=n;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        int breaks=minAttempt(k-1,mid-1,dp);
        int notBreaks=minAttempt(k,n-mid,dp);
        int worst=max(breaks,notBreaks)+1;
        ans=min(ans,worst);

        if(breaks>notBreaks) hi=mid-1;
        else lo=mid+1;
    }
    cout<<ans<<"---ans;"<<endl;
    dp[n][k]=ans;
    return dp[n][k];
}
int superEggDrop(int k, int n) {
       vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
       return minAttempt(k,n,dp);
    }
int main(){
     int k=2;
     int n=6;
     return superEggDrop(k,n);
}