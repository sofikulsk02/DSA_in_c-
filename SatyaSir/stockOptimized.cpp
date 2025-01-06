// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>nums={3,1,6,7,5,4};
//     int n=nums.size();
//     int maxProfit=0;
//     int maxRight=nums[n-1];
//     for(int i=n-2;i>=0;i--){
//         int profit=maxRight-nums[i];
//         if(profit>maxProfit){
//             maxProfit=profit;
//         }
//         if(nums[i]>maxRight){
//             maxRight=nums[i];
//         }
//     }
//     cout<<maxProfit<<endl;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={3,1,6,7,5,4};
    int n=nums.size();
    int maxProfit=0;
    int maxRight=nums[n-1];
    for(int i=n-2;i>=0;i--){
        int profit=maxRight-nums[i];
        if(maxProfit<profit){
            maxProfit=profit;
        }
        if(maxRight<nums[i]){
            maxRight=nums[i];
        }
    }
    cout<<maxProfit<<endl;
}