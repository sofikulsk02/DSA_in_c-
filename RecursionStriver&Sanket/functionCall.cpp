#include<bits/stdc++.h>
using namespace std; 
int product(int x,int y){
    return x*y;
}
void fun(int n){
    if(n==0) return;
    cout<<"Hello from fun"<<endl;
    fun(n-1);
}
int main(){
    int x=product(2,4);
    cout<<x;
    fun(4);
}