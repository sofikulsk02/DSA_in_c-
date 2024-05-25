#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Row no of the first matrix:";
    cin>>m;
    int n;
    cout<<"col no of the first matrix:";
    cin>>n;
    int s;
    cout<<"Row no of the 2nd matrix:";
    cin>>s;
    int t;
    cout<<"col no of the 2nd matrix:";
    cin>>t;
    if(n==s){
        int arr[m][n];
        cout<<"Enter the fisrt matrix:";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        int brr[s][t];
        cout<<"Enter the fisrt matrix:";
        for(int i=0; i<s; i++){
            for(int j=0; j<t; j++){
                cin>>brr[i][j];
            }
        }
        int res[m][t];
        for(int i=0 ;i<m; i++){
            for(int j=0; j<t; j++){
                res[i][j]=0;
            for(int k=0; k<s; k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<t; j++){
                cout<<res[i][j]<<" ";
            }
        }
    }
    
}