#include<bits/stdc++.h>
using namespace std;
int maxPowerOf2TillRange(int n){
    //let the maximum power of 2 is x
    int x=0;
    while((1<<x)<=n){
        x++;
    }
    return x-1;
}
int countTotalSetBits(int n){
    if(n==0) return 0;
    int ans=0;
    int x=maxPowerOf2TillRange(n);
    int bitsUpto2x=x*(1<<(x-1));
    int msbToN=n-(1<<x)+1;
    int rest=n-(1<<x);
    ans=bitsUpto2x+msbToN+countTotalSetBits(rest);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<countTotalSetBits(n);
    return 0;
}