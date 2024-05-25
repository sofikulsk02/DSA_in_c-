#include <iostream>
#include <vector>
#include <queue>

using namespace std;

long long solveQuery(vector<int>& A, int K) {
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    // Add the first K elements to the priority queue
    for (int i = 0; i < K; ++i) {
        pq.push(A[i]);
    }

    long long sum = 0;

    // Perform operations until there's only one element left in the priority queue
    while (pq.size() > 1) {
        // Extract the top 3 elements
        long long x = pq.top(); pq.pop();
        long long y = pq.top(); pq.pop();
        long long z = pq.top(); pq.pop();

        // Calculate the new element and add it to the sum
        long long new_element = x + y - z;
        sum += new_element;

        // Add the new element to the priority queue
        pq.push(new_element);
    }

    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        vector<int> queries(Q);
        for (int i = 0; i < Q; ++i) {
            cin >> queries[i];
        }

        for (int i = 0; i < Q; ++i) {
            cout << solveQuery(A, queries[i]) << " ";
        }
        cout << endl;
    }

    return 0;
}
