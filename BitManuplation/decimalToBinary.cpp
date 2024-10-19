#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int num){
    string ans="";
    while(num>0){
        if(num%2==0){
            ans="0"+ans;
        }
        else ans="1"+ans;
        num/=2;
    }
    return ans;
}
int main(){
      int n=17;
      cout<<decimal_to_binary(n);
}