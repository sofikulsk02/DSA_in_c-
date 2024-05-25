#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int r=n%10;
        n/=10;
         cout<<r; 
    }
    if(n<0){
        cout<<"This is false";
    }
   
}