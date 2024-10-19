#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(string &s){
          int n=s.size();
          int ans=0;
          for(int i=n-1; i>=0;i--){
            char ch=s[i];
            int num=ch-'0';
            ans+=num*(1<<(n-i-1));
          }
          return ans;
}
int main(){
       string str="01110101";
       cout<<binaryToDecimal(str);
}