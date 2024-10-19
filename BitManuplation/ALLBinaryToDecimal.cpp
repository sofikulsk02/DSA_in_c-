#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
using namespace std;
string decTobi(int num){
    string str="";
    while(num>0){
        if(num%2==0){
            str="0"+str;
        }
        else str="1"+str;
        num/=2;
    }
    return str;
}
int binToDec(string s){
    int n=s.size();
    int ans=0;
    for(int i=n-1;i>=0;i--){
          char ch=s[i];
          int num=ch-'0';
          ans+=num*(1<<(n-i-1));
    }
    return ans;
}
int setBit(int n){
          int count=0;
          while(n>0){
             n=n&(n-1);
             count++;
          }
          return count;
}
bool powerOfTwo(int n){
    int count=setBit(n);
    if(count>1) return false;
    else return true;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cout<<decTobi(7);
}
