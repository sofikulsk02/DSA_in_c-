#include <iostream>
#include <string>

using namespace std;

// Function to find the maximum number of games Chef can win
int maxWins(string A) {
    int N = A.length();
    int result = 0;
    int count = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] == A[i - 1]) {
            count++;
        } else {
            if (A[i - 1] == 'R') {
                if (A[i] == 'P') {
                    result += count;
                }
            } else if (A[i - 1] == 'P') {
                if (A[i] == 'S') {
                    result += count;
                }
            } else if (A[i - 1] == 'S') {
                if (A[i] == 'R') {
                    result += count;
                }
            }
            count = 1;
        }
    }

    if (A[N - 1] == 'R') {
        if (A[N - 2] == 'S') {
            result += 1;
        }
    } else if (A[N - 1] == 'P') {
        if (A[N - 2] == 'R') {
            result += 1;
        }
    } else if (A[N - 1] == 'S') {
        if (A[N - 2] == 'P') {
            result += 1;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        string A;
        cin >> A;
        cout << maxWins(A) << endl;
    }
    return 0;
}