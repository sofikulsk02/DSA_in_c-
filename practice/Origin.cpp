#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Function to find the origin of a number
int findOrigin(int num) {
    if (num < 10) return num;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return findOrigin(sum);
}

// Function to calculate the sum of origin values from 1 to N
int sumOfOrigins(int N) {
    unordered_map<int, int> origins;
    for (int i = 1; i <= 9; i++) {
        origins[findOrigin(i)]++;
    }

    int result = 0;
    for (int i = 1; i <= 9; i++) {
        int count = N / i;
        if (i <= origins[i]) {
            result += origins[i] * count;
        } else {
            result += i * count;
        }
        if (i == origins[i]) {
            result += N % i;
        } else if (i < origins[i]) {
            result += origins[i] - (i * (count - 1));
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
        cout << sumOfOrigins(N) << endl;
    }
    return 0;
}