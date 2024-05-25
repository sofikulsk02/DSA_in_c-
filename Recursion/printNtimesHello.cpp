#include<iostream>
using namespace std;
void printHello(int n){
    if(n==0) return;
    cout<<"hello world"<<endl;
    printHello(n-1);
    return ;
}
void hello(int n){
    if(n==0) return ;
    cout<<"hello world"<<endl;
    hello(n-1);
}
int main(){
    int n;
    cout<<"Enter the number of times you wanna print the message:";
    cin>>n;
    //printHello(n);
    hello(n);
}