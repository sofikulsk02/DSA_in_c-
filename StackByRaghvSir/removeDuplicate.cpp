#include<bits/stdc++.h>
using namespace std;
string removeElement(string s){
          stack<char>ch;
          ch.push(s[0]);
          for(int i=1; i<s.length();i++){
            if(s[i]!=ch.top()){
                ch.push(s[i]);
            }
          }
          s="";
          while(ch.size()>0){
            s+=ch.top();
            ch.pop();
          }
          reverse(s.begin(),s.end());
          return s;
}
int main(){
    string s="aaabbcdeffghh";
          s= removeElement(s);
           cout<<s<<endl;
}