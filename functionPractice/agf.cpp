#include<bits/stdc++.h>
using namespace std;
int countFactors(int n){
    int count=0;
    for(int i=1; i<=sqrt(n);i++){
        if(n%i==0) {
            if(i==n) count-=1;
            else count+=2;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countFactors(n);
}