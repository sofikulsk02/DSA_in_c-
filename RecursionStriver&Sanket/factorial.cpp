#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    if(n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    cout<<factorial(5);
}