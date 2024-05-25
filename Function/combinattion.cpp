#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=2; i<=x; i++){
         fact*=i;

    }
    return fact;
}
int combination(int x, int y){
    int k=x-y;
    int result=factorial(x)/(factorial(y)*factorial(k));
    return result;
}
int main(){
    int n,r;
    cout<<"Enter the number n: ";
    cin>>n;
    cout<<"Enter the number r: ";
    cin>>r;
   int pnc=combination(n,r);
cout<<"the pnc result is:"<<pnc;
}