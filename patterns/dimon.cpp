#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
     int nsp=n-3;
     int nst=1;
     for(int i=1; i<=2*n-3;i++){
        for(int j=1; j<=nsp;j++){
            cout<<" ";
        }
        if(i<=n-3) nsp--;
        else nsp++;
        for(int k=1; k<=i; k++){
        if(i%2!=0){
            cout<<"*";
        }
        else{
          cout<<"+ ";
        }
     }
     if(i<=n-1) nst+=2;
     else nst-=2;
     cout<<endl;
     }
    }
 

              
