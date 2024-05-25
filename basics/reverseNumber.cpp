#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while (n>0)
    {
       n=n%10;
    }
    cout<<n;
   
}