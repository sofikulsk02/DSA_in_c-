#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row number:";
    cin>>m;
    int n;
    cout<<"Enter the columns no:";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int Trans[n][m];
    for(int i=0; i<=n; i++){
        for(int j=0; j<m; j++){
            Trans[i][j]=arr[j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<Trans[i][j]<<" ";
        }
        cout<<endl;
    }
}