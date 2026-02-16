#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size: ";
    if (!(cin >> n) || n <= 0) {
        cerr << "Invalid size\n";
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter the array elements (space separated): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the target element: ";
    cin >> x;

    bool flag = false;
    for (int i = 0; i < n; ++i) {
        if (x == arr[i]) {
            flag = true;
            break;
        }
    }

    if (flag) cout << "Element found\n";
    else cout << "Element not found\n";

    return 0;
}