#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(string str){
    int n=str.size();
     int ans=0;
     for(int i=n-1; i>=0;i--){
        char ch=str[i];
        int num=ch-'0';
        ans+=num*(1<<(n-i-1));
     }
     return ans;
 }
int main(){
      string s="101001";
      cout<<binaryToDecimal(s);
}