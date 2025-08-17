#include <bits/stdc++.h>
using namespace std;

int knapsack(int N, int K, vector<int>& W, vector<int>& V) {
    int INF = 1e9;
    int totalValue = 0;
    for (int v : V) totalValue += v;

    vector<int> dp(totalValue + 1, INF);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int val = totalValue; val >= V[i]; val--) {
            dp[val] = min(dp[val], dp[val - V[i]] + W[i]);
        }
    }

    for (int val = totalValue; val >= 0; val--) {
        if (dp[val] <= K) return val;
    }
    return 0;
}

int main() {
    int N = 4, K = 7;
    vector<int> W = {6, 4, 3, 5};
    vector<int> V = {13, 8, 6, 12};

    cout << "Maximum value for weight " << K 
         << " is: " << knapsack(N, K, W, V) << endl;
}
