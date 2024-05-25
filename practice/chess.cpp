#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        
        int totalPoints = p1 + p2 + p3;
        if (totalPoints % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int totalGames = totalPoints / 2;
        int maxDraws = min({totalGames, p1, p2, p3});

        bool feasible = false;
        for (int d = maxDraws; d >= 0; --d) {
            int remainingPoints = totalPoints - 2 * d;
            int requiredGames = (p3 - p2) + (p3 - p1);
            if (remainingPoints == requiredGames) {
                feasible = true;
                cout << d << endl;
                break;
            }
        }
        
        if (!feasible) {
            cout << -1 << endl;
        }
    }

    return 0;
}
