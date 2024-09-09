#include<bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    unordered_map<string,int>m;
    pair<string,int>p;
    p.first="Rajib";
    p.second=2;
    pair<string,int>p2;
    p2.first="soma";
    p2.second=3;
    pair<string,int>p3;
    p3.first="naaz";
    p3.second=1;
    m.insert(p);
    m.insert(p2);
    m.insert(p3);

    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}