#include <bits/stdc++.h>
using namespace std;
int computeOrigin(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
long long sumOfOriginValues(int N) {
    long long sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += computeOrigin(i);
    }
    return sum;
}
int main() {
    int t;
    cin >>t;
    for(int i=t; i>0; i--) {
        int N;
        cin >> N;
        long long result = sumOfOriginValues(N);
        cout << result << endl;
    }
    return 0;
}
