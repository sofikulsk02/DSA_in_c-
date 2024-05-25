#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number that you want to check: ";
    cin>>n;
    while(n>0){
      int  r=n%10;
      n=n/10;
cout<<r;
    }
    
}

//this is a multiline commnet