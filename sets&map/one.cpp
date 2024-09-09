#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    int target=100;
    if(s.find(target)!=s.end()){
        cout<<"Exsists";
    }
    else cout<<"NO";
    for(int ele: s){
        cout<<ele<<" ";
    }
}