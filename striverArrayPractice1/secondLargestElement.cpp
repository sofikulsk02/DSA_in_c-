// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,3,45,6,78,11};
//     int maxElement=INT_MIN;
//     int secondMax=INT_MIN;
//     for(int i=0;i<6;i++){
//         if(arr[i]>maxElement){
//             maxElement=arr[i];
//         }
//     }
//     for(int i=0;i<6;i++){
//         if(arr[i]!=maxElement && secondMax<arr[i]){
//             secondMax=arr[i];
//         }
//     }
//     cout<<secondMax<<endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {12, 345, 678, 422, 90, 20, 89, 200};
    if (nums.size() < 2) {
        cout << "No second largest element\n";
        return 0;
    }

    int max1 = numeric_limits<int>::min();
    int max2 = numeric_limits<int>::min();

    for (int x : nums) {
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2 && x != max1) {
            max2 = x;
        }
    }

    if (max2 == numeric_limits<int>::min())
        cout << "No second largest element\n";
    else
        cout << max2 << '\n';

    return 0;
}

