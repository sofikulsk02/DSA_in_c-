#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){
    if(num==1) return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
       cout<<isprime(19);
}