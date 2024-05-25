//important recursion ke baad and aage wali duniya 
//this is recursion k aage wali duniya
#include<iostream>
using namespace std;
void print1toN(int i,int n){
    if(i>n) return ;
    cout<<i<<endl;
    print1toN(i+1,n);
}
void numberPrint(int i,int n){
    if(i>n) return ;
    cout<<i<<endl;
    numberPrint(i+1,n);
}
int main(){
    int n;
    cout<<"Enter the number n:";
    cin>>n;
   // print1toN(1,n);
   numberPrint(1,n);
}