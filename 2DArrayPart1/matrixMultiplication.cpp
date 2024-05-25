#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row no of first matix:";
    cin>>n;
    int m;
    cout<<"Enter the col no of fisrt matix:";
    cin>>m;
    int s;
    cout<<"Enter the row no of the 2nd matrix:";
    cin>>s;
    int t;
    cout<<"Enter the col no of the 2nd matrix:";
    cin>>t;
    if(m==s){
         int a[n][m];
         cout<<"Enter the matrix elements:";
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
         }

         int b[s][t];
         cout<<"Enter the matrix elements of the second:";
         for(int i=0; i<s;i++){
            for(int j=0; j<t;j++){
                cin>>b[i][j];
            }
         }
          int res[n][t];
         for(int i=0; i<n;i++){
            for(int j=0; j<t; j++){
                  res[i][j]=0;
                 for(int k=0; k<s;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                 }
            }
         } 
                cout<<endl;
       
       for(int i=0; i<n; i++){
        for(int j=0; j<t; j++){
            cout<<res[i][j]<<" ";
        }       cout<<endl;
       }

        
    }

}