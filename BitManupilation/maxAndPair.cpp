#include <bits/stdc++.h>
using namespace std;

int maxAND(int arr[], int n) {
    int ans = 0;
    for (int i = 31; i >= 0; i--) {
        int mask = ans | (1 << i);
        int count = 0;
        for (int j = 0; j < n; j++) {
            if ((arr[j] & mask) == mask) count++;
        }
        if (count >= 2) ans = mask;
    }
    return ans;
}

int main() {
    int arr[] = {24, 12, 23, 25, 7, 26, 27, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum AND value: " << maxAND(arr, n); // Output: 26
    return 0;
}
