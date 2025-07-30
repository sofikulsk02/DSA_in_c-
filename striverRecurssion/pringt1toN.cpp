#include<bits/stdc++.h>
using namespace std;
void printToN(int n,int i){
    if(i==n+1) return ;
    cout<<i<<" ";
    i++;
    printToN(n,i);
}
int main(){
    int n;
    cin>>n;
    printToN(n,1);
}