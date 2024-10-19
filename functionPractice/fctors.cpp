#include<bits/stdc++.h>
using namespace std;
int countFactors(int n){
    int count=0;
    for(int i=1; i<sqrt(n);i++){
        if(n%i==0) count++;
    }
    for(int i=sqrt(n);i>=1;i--){
        if(i*i==n) continue;
        if(n%i==0) count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countFactors(n);
}