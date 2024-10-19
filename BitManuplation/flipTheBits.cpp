#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(int n){
    string res="";
    while(n>=0){
          if(n%2==0) res="0"+res;
          else res="1"+res;
          n/=2;
    }
    return res;
}
string heighestPow2(int n){
    int temp=0;
    while(n!=0){
    temp=n;
    n=(n&(n-1));
    }
    int ans=(temp<<1);
    ans=ans-1;
    return decimalToBinary(ans);
}
string flipTheBits(int n){

}
int main(){
         int n=10;
         cout<<(23^31);
}