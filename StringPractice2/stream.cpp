#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="My name is sofikul sk and i am from wb , sofikul is the an abbriviation of inteligent";
    stringstream ss(s);
    string temp;
    vector<string>v;
    unordered_map<string,int>m;
    while(ss>>temp){
        v.push_back(temp);
        m[temp]++;
    }
    for(auto ele:m){
        cout<<ele.first<<"->"<<ele.second<<" ";
        cout<<endl;
    }
}