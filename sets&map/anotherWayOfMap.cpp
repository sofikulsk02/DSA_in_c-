#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>m;
    m["Rajib"]=2;
    m["soma"]=1;
    m["naaz"]=3;
    m["ajim"]=100;
    cout<<m.size()<<endl;
    int maxi=0;
    unordered_map<string,int>mp;
    for(auto x: m){
        if(x.second>maxi){
            maxi=x.second;
            mp[x.first]=maxi;
        }
    }
    m.erase("ajim");
    cout<<m.size()<<endl;
    cout<<maxi<<endl;
    for(auto ele:mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<mp.size()<<endl;
}