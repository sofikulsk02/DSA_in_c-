#include<bits/stdc++.h>
using namespace std;
int aPowerb(int a,int b){
    if(b==0) return 1;
    if(b%2==0){
        int ans=aPowerb(a,b/2);
        return ans*ans;
    }
    else{
        int ans=aPowerb(a,b/2);
        return ans*ans*2;
    }
}
int main(){
           cout<<aPowerb(2,8);
}