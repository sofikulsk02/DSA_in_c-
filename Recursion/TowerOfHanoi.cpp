#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,char a,char b,char c){
    int count=0;
    if(n==0) return;
    towerOfHanoi(n-1,a,c,b);
    cout<<a<<"-->"<<c<<endl;
    count++;
    towerOfHanoi(n-1,b,a,c);
    cout<<count<<endl;
}
int main(){
    int n=4;
    towerOfHanoi(n,'A','B','C');
}