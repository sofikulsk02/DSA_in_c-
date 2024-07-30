// #include<bits/stdc++.h>
// #define int long long 
// using namespace std;
// signed main(){
//     ios_base::sync_with_stdio;
//     cin.tie(0); cout.tie(0);
//        int arr[9]={7,1,2,5,8,4,9,3,6};
//        int n=sizeof(arr)/sizeof(arr[0]);
//        int k=3;

//        int PreSum=0;
//        int maxSum_window=INT_MIN;
//        int maxIndx=-1;
//        for(int i=0; i<k;i++){
//         PreSum+=arr[i];
//        }

//        int i=1,j=k;
//        while(j<n){
//         int curSum=PreSum+arr[j]-arr[i-1];
//         if(maxSum_window<curSum){
//             maxSum_window=curSum;
//             maxIndx=i;
//         }
//               PreSum=curSum;
//               i++;
//               j++;
//        }
//        cout<<maxSum_window<<endl<<maxIndx;
// }

#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
        ios_base::sync_with_stdio;
        cin.tie(0); cout.tie(0);
        int arr[9]={7,1,2,5,8,4,9,3,6};
       int n=sizeof(arr)/sizeof(arr[0]);
       int k=3;
       int sum=0; 
       int maxSum=INT_MIN;
       int preSum=0;
       for(int i=0; i<n; i++){
        sum+=arr[i];
       }
        int i=1; 
        int j=k;
         while(j<n){
              int curSum=sum+arr[j]-arr[i];
               if(maxSum<preSum){
                maxSum=preSum;
               }
               preSum=curSum;
               i++;
               j++;
          }
}