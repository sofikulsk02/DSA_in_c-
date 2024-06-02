#include<iostream>
using namespace std;
int main(){
    int m,n,s,t;
    cout<<"Enter the row and column of the first matrx";
    cin>>m>>n;
    cout<<"Enter the row and col of the second matrix";
    cin>>s>>t;
    if(n==s){
        cout<<"Enter the first matrix";
        int arr[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        cout<<"Enter the second matrix";
        int brr[s][t];
        for(int i=0; i<s; i++){
            for(int j=0; j<t; j++){
                cin>>arr[i][j];
            }
        }
        int res[m][t];
        for(int i=0; i<m; i++){
            for(int j=0; j<t; j++){
                   res[i][j]=0;
                for(int k=0; k<s; k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
              for(int i=0; i<m; i++){
        for(int j=0; j<t; j++){
            cout<<res[i][j]<<" ";
        }
    }
        }
    }
  
}