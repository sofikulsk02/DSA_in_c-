#include<iostream>
using namespace std;
string solve(string s){
    string st; // acts as stack of remaining non-digit chars
    for(char c : s){
        if(isdigit(c)){
            st.pop_back(); // remove closest non-digit to its left
        } else {
            st.push_back(c);
        }
    }
    return st;
}
int main(){
    string s;
    cin >> s;
    cout << solve(s) << endl;
}