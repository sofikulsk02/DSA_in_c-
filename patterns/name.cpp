#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    for(int i=0; i<n; i++){
        for(int j=0 ;j<n; j++){
            if((i==0 && j!=0) || (j==0 && i<n/2 && i!=0) || (i==n/2 && j!=0 && j!=n-1) || (j==n-1 && i>n/2 && i!=n-1) || (i==n-1 && j!=n-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"  ";
            //o
            for(int j=0; j<n; j++){
                if(((i==0 || i==n-1 )&& j!=0 && j!=n-1) || ((j==0 || j==n-1)&& i!=0 && i!=n-1)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }

            cout<<"  ";
            //f
            for(int j=0; j<n; j++){
                if((i==0 || (i==n/2 && j<=n/2) || j==0)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }

        cout<<" ";
             //i
              for(int j=0; j<n; j++){
                if((i==0 || i==n-1 || j==n/2)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            //k
            cout<<"  ";

             for(int j=0; j<n; j++){
                if((j==0) || (i+j==n-3) || (i-j)==n/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<" ";
            //u
             for(int j=0; j<n; j++){
                if((j==0 && i!=n-1) || (i==n-1 && j!=0 && j!=n-1) || (j==n-1)&& i!=n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            
            cout<<"  ";
             for(int j=0; j<n; j++){
                if(j==0 || i==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }

            cout<<"   ";

            //s
            for(int j=0 ;j<n; j++){
            if((i==0 && j!=0) || (j==0 && i<n/2 && i!=0) || (i==n/2 && j!=0 && j!=n-1) || (j==n-1 && i>n/2 && i!=n-1) || (i==n-1 && j!=n-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"  ";

        for(int j=0; j<n; j++){
                if((j==0) || (i+j==n-3) || (i-j)==n/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        cout<<endl;
    }
}