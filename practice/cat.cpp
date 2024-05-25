#include <iostream>
#include <vector>
#include <set>
using namespace std;

int findLoneliness(vector<int>& a, int n) {
    for (int k = 1; k <= n; ++k) {
        set<int> or_values;
        int current_or = 0;
        for (int i = 0; i < k; ++i) {
            current_or |= a[i];
        }
        or_values.insert(current_or);
        for (int i = k; i < n; ++i) {
            current_or |= a[i];
            current_or &= (1 << 20) - 1;  
            current_or &= ~a[i - k];  
            or_values.insert(current_or);
        }
        if (or_values.size() == 1) {
            return k;
        }
    }
    return n; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << findLoneliness(a, n) << endl;
    }
    return 0;
}
