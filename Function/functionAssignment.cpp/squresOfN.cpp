#include<iostream>
using namespace std;
int SquresOf(int n){
    for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
    }
}
int main(){
  int n ;
  cout<<"Enter the number:";
  cin>>n;
  SquresOf(n);
  }