#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        reverse*=10;
        int rem=n%10;
            reverse+=rem;
            n=n/10;
            }
            cout<<reverse;
    
}