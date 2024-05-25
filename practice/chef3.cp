#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	 int chefWins = 0;
    char prevMove = ' ';
	for(int i=t; i>0; i--){
	    int chefWins = 0;
    char prevMove = ' ';
        int N;
        cin>>N;
        string moves;
        cin>>moves;
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

    cout<<chefWins<<endl;
	}
	
}
