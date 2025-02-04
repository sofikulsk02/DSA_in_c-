#include<bits/stdc++.h>
using namespace std;
int nThFibonacci(int n){
    if(n<=1) return n;
    return nThFibonacci(n-1)+nThFibonacci(n-2);
}
int main(){
     cout<<nThFibonacci(0);
}