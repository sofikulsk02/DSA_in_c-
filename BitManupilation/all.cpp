#include<bits/stdc++.h>
using namespace std;
int stringTodecimal(string s){
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++){
        char ch=s[i];
        int num=ch-'0';
        ans+=num*(1<<(n-i-1));
    }
    return ans;
}
int setCount(int n){
    int count=0;
    while(n!=0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
string decimalTostring(int n){
    string s="";
    while(n>0){
        if(n%2==0){
            s="0"+s;
        }
        else s="1"+s;
        n/=2;
    }
    return s;
}
bool powerOfTwo(int num){
          if(setCount(num)>1) return false;
          else return true;
}
int maxPowerTwo(int num){
    int temp=0;
    while(num!=0){
        temp=num;
        num=num&(num-1);
    }
    return temp;
}
int main(){
    string str="1010100";
    cout<<stringTodecimal(str);
    cout<<endl;
    cout<<decimalTostring(7);
    cout<<endl;
    cout<<setCount(7);
    cout<<endl;
    cout<<powerOfTwo(64)<<endl<<powerOfTwo(10);
    cout<<endl<<maxPowerTwo(64);
}