#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int combination(int n,int r){
     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
     return ncr;
}
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int r;
    cout<<"r:";
    cin>>r;
    cout<<combination(n,r);
;}