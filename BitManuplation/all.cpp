#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(int n){
    string res="";
    while(n>0){
        if(n%2==0){
            res="0"+res;
        }
        else res="1"+res;
        n/=2;
    }
    return res;
}
int binaryToDecimal(string s){
          int n=s.size();
          int ans=0;
          for(int i=n-1; i>=0;i--){
            char ch=s[i];
             int num=ch-'0';
             ans+=num*(1<<(n-i-1));
          }
          return ans;
}
int setBit(int n){
    int count=0;
    while(n!=0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
bool powerOf2(int n){
    int ans=setBit(n);
    if(ans==1) return true;
    else return false;
}
int maximumPower2Lesser(int n){
    int temp=0;
    while(n!=0){
        temp=n;
        n=n&(n-1);
    }
    return temp;
}
string filpBit(int n){
    string s=decimalToBinary(n);
    int ans=maximumPower2Lesser(n);
    int nxtVal=ans<<1;
      nxtVal-=1;
     int res_num=n^nxtVal;
     cout<<s<<endl;
     return decimalToBinary(res_num);
}
int main(){
    cout<<filpBit(14);
}