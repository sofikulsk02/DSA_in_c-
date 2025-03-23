#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
       int arr[9]={7,1,2,5,8,4,9,3,6};
       int n=sizeof(arr)/sizeof(arr[0]);
       int k=3;
       int sum=0;
       int maxSum=INT_MIN;
       int maxIndx=-1;
       vector<int>ans;
       for(int i=0; i<k;i++){
        sum+=arr[i];
       }
       int i=1; int j=k;
       while(j<n){
        int cursum=sum+arr[j]-arr[i-1];
        ans.push_back(cursum);
        if(maxSum<cursum){
            maxSum=cursum;
            maxIndx=i;
        }
        sum=cursum;
        i++;
        j++;
       }
       for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
       }
       cout<<"The maximum window is "<<maxSum<<" at "<<maxIndx;
       
}