#include<bits/stdc++.h>
using namespace std;
void printToN(int n){
    if(n==0) return;
     cout<<n--<<" ";
    printToN(n);
}
int main(){
    int n;
    cin>>n;
    printToN(n);
}