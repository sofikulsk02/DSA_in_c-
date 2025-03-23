#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    m["Rajib"]=2;
    m["soma"]=4;
    m["naaz"]=6;
    for(auto x:m){
        cout<<x.second<<" "<<endl;
    }
}