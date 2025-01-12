#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abceffghh";
    int count=0;
    for(int i=0; i<s.size();i++){
        if(i==s.size()-1) break;
        if(s[i]!=s[i+1]) count++;
    }
    cout<<count;
}