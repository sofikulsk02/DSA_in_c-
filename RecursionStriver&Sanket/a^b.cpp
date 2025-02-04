#include<bits/stdc++.h>
using namespace std;
int aPowerb(int a,int b){
    if(a==0 && b==0) return -1;
    else if(a==0 && b!= 0) return 0;
    if(b-1==0) return 0;
    return a*pow(a,b-1);
}
int main(){
    cout<<aPowerb(0,0);
}