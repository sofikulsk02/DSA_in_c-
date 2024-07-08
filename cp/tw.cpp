#include <iostream>
using namespace std;
void solve() {
    int q;
    cin >> q;
    while (q--) {
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        bool possible = false;
        for (int x = 1; x < a; ++x) {
            int remaining = S - x * n;
            if (remaining >= 0 && remaining <= b) {
                possible = true;
                break;
            }
        }
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main(){
    solve();
    return 0;
}
