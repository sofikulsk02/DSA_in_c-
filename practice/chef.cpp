#include <iostream>
#include <string>

using namespace std;

int maxChefWins(int N, string moves) {
    int chefWins = 0;
    char prevMove = ' ';

    for (int i = 0; i < N; ++i) {
        char rokuMove = moves[i];
        char chefMove;
        if (rokuMove == 'R') {
            chefMove = 'P'; 
        } else if (rokuMove == 'P') {
            chefMove = 'S'; 
        } else {
            chefMove = 'R'; 
        }
        if (chefMove != prevMove) {
            chefWins++;
            prevMove = chefMove;
        }
    }

    return chefWins;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string moves;
        cin >> moves;

        int chefWins = maxChefWins(N,moves);
        cout << chefWins << endl;
    }

    return 0;
}
