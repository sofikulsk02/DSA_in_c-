#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int>m;
    string s;
    cin>>s;
    for(int i=0; i<s.length();i++){
        m[s[i]]++;
    } 
    int maxi=0;
    char maxCh;
    for(auto ele:m){
      if(ele.second>maxi){
        maxCh=ele.first;
        maxi=ele.second;
      }
    }
    cout<<maxi<<"->"<<maxCh<<endl;
}