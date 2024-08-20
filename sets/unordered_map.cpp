#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    unordered_map<int,int>map1;
    // map1["Sofikul seikh"]=2;
    // map1["Serina Sultana"]=2;
    // map1["Naaz Moon"]=2;
    // map1["Soma sultana"]=1;
    // map1["Reshma khatun"]=100;
    // map1["Sanuwari Khatun"]=101;
    // map1["pihu khatun"]=102;
    map1[1]=100;
    map1[2]=200;
    map1[3]=300;
    map1[4]=400;
    map1[5]=500;
    for(auto x:map1){
        cout<<x.first<<"  "<<x.second<<"\n";
    }
}