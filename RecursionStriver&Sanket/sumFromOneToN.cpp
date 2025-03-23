#include<bits/stdc++.h>
using namespace std;
int sumFromOneToN(int n){
    if(n==1) return 1;
    return n+sumFromOneToN(n-1);
}
int main(){
    cout<<sumFromOneToN(3);
}