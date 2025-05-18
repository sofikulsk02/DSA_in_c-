// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={24,12,23,25,7,26,27,31};
//     int ans=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=31;i>=0;i--){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]>>i&1==1) count++;
//         }
//         if(count>=2){
//             ans=ans | (1<<i);
//         }
//         for(int j=0;j<n;j++){
//             if(((arr[j]>>i)& 1)==0){
//                 arr[j]=0;
//             }
//         }
//     }
//     cout<<ans;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {24, 12, 23, 25, 7, 26, 27, 31};
    int ans = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 31; i >= 0; i--) {
        int count = 0;
        // Check how many numbers have the i-th bit set
        for (int j = 0; j < n; j++) {
            if ((arr[j] >> i) & 1) {  // Fixed: arr[j] instead of arr[i]
                count++;
            }
        }
        // If at least two numbers have this bit set, include it in the answer
        if (count >= 2) {
            ans = ans | (1 << i);  // Fixed: 1 << i instead of 1 >> i
            // Eliminate numbers that don't have this bit set
            for (int j = 0; j < n; j++) {
                if (((arr[j] >> i) & 1) == 0) {
                    arr[j] = 0;
                }
            }
        }
    }
    cout << ans;  // Output: 26 (from 26 & 27 = 26)
    return 0;
}
