#include<iostream>
using namespace  std;
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
    int n;
    cin>>n;
    for(int i=0; i<=n;i++){
        for(int j=0; j<=i; j++){
            cout<<combination(i,j);
        }
        cout<<endl;
    }
}