#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={15,-1,7,2,5,4,2,3};
    int n=arr.size();
    int count=0;
    int maxElement=INT16_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxElement){
            count++;
            maxElement=arr[i];
        }
    }
    cout<<count<<endl;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int nums[8] = {15, -1, 7, 2, 5, 4, 2, 3};
//     int count = 0;
//     int maxRight =nums[7]; 
//     for (int i = 7; i >= 0; i--) {
//         if (nums[i] > maxRight) {
//             count++; 
//             maxRight = nums[i];
//         }
//     }
//     cout << count << endl;
// }
