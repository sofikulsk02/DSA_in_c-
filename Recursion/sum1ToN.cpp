//this is important
#include<iostream>
using namespace std;
void sum1toN(int sum,int n){
    if(n==0){
        cout<<sum;
    }
    sum1toN(sum+n,n-1);
}
//another important method(using return type);
int sum2(int n){
    if(n==0) return 0;
    return n+sum2(n-1);
}
int main(){
  // sum1toN(0,4);
  cout<<sum2(4);
}